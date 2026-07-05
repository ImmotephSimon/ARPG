#include "GlobalBlueprintFunctionLibrary.h"
#include "Internationalization/Regex.h"
#include "GenericPlatform/GenericPlatformMemory.h"
#include "Containers/Set.h"

int32 UGlobalBlueprintFunctionLibrary::BinarySearch(const TArray<int32>& arr, int32 target) {
    if (arr.Num() == 0) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid array of BinarySearch"));
        return -1;
    }

    int32 left = 0;
    int32 right = arr.Num() - 1;

    if (target >= arr[right]) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid target of BinarySearch"));
        return -1; 
    }

    while (left < right) {
        int32 mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1; // Move right
        }
        else {
            right = mid; // Keep mid in the search range
        }
    }
    return left; // `left` will be the index of the smallest element greater than target
}

FString UGlobalBlueprintFunctionLibrary::AddSpacesBeforeCaps(const FString& Input)
{
    FRegexPattern Pattern(TEXT("(?<!^)([A-Z])"));
    FRegexMatcher Matcher(Pattern, Input);

    FString Result = Input;
    int32 Offset = 0;

    while (Matcher.FindNext())
    {
        int32 MatchPos = Matcher.GetMatchBeginning() + Offset;
        Result.InsertAt(MatchPos, TEXT(" "));
        Offset++;
    }

    return Result;
}

FString UGlobalBlueprintFunctionLibrary::RegexReplace(const FString& Input, const FString& Pattern, const FString& Replacement)
{
    FRegexPattern RegexPattern(Pattern);
    FRegexMatcher Matcher(RegexPattern, Input);

    FString Result = Input;
    int32 Offset = 0;

    while (Matcher.FindNext())
    {
        int32 MatchStart = Matcher.GetMatchBeginning() + Offset;
        int32 MatchEnd = Matcher.GetMatchEnding() + Offset;

        FString ProcessedReplacement = Replacement;

        // Bumped to 4 to process the new group, and removed the IsEmpty() check
        for (int32 i = 1; i <= 4; ++i)
        {
            FString GroupStr = Matcher.GetCaptureGroup(i);
            ProcessedReplacement = ProcessedReplacement.Replace(*FString::Printf(TEXT("$%d"), i), *GroupStr);
        }

        Result = Result.Left(MatchStart) + ProcessedReplacement + Result.RightChop(MatchEnd);
        Offset += ProcessedReplacement.Len() - (MatchEnd - MatchStart);
    }

    return Result;
}

FString UGlobalBlueprintFunctionLibrary::FixTooltipMarkup(const FString& Input)
{
    FString Output;
    Output.Reserve(Input.Len() * 1.2f);

    TArray<FString> TagStack;
    int32 i = 0;
    const int32 Len = Input.Len();

    while (i < Len)
    {
        // Detect Opening Tags (e.g., <Normal>, <Bold>)
        if (Input[i] == '<' && Input.Mid(i + 1, 3) != TEXT("/") && Input.Mid(i + 1, 2) != TEXT("kw"))
        {
            int32 End = Input.Find(TEXT(">"), ESearchCase::CaseSensitive, ESearchDir::FromStart, i);
            FString Tag = Input.Mid(i, End - i + 1);
            TagStack.Push(Tag);
            Output += Tag;
            i = End + 1;
        }
        // Detect Closing Tag </>
        else if (Input.Mid(i, 3) == TEXT("</>"))
        {
            if (TagStack.Num() > 0) TagStack.Pop();
            Output += TEXT("</>");
            i += 3;
        }
        // Detect Keyword [Display Text:System Key] or [FallbackKey]
        else if (Input[i] == '[')
        {
            int32 End = Input.Find(TEXT("]"), ESearchCase::CaseSensitive, ESearchDir::FromStart, i);
            if (End != INDEX_NONE)
            {
                FString RawContent = Input.Mid(i + 1, End - i - 1);
                FString DisplayText, ID;

                // Split into Left (DisplayText) and Right (ID)
                if (RawContent.Split(TEXT(":"), &DisplayText, &ID))
                {
                    // Trimming spaces allows safely writing "[maimed : MaimDebuff]"
                    DisplayText.TrimStartAndEndInline();
                    ID.TrimStartAndEndInline();
                }
                else
                {
                    // Fallback: [Uncommon] means Key and Display are the same
                    DisplayText = RawContent;
                    ID = RawContent;
                }

                // If nested, close current tag, insert kw, reopen tag
                bool bWasNested = TagStack.Num() > 0;
                if (bWasNested) Output += TEXT("</>");

                Output += FString::Printf(TEXT("<kw id=\"%s\">%s</>"), *ID, *DisplayText);

                if (bWasNested) Output += TagStack.Last();
                i = End + 1;
            }
            else { Output.AppendChar(Input[i++]); }
        }
        else
        {
            Output.AppendChar(Input[i++]);
        }
    }
    return Output;
}


void UGlobalBlueprintFunctionLibrary::LogConciseMemory()
{
    // 1. Grab low-level OS memory stats
    FPlatformMemoryStats MemStats = FPlatformMemory::GetStats();

    // 2. Convert bytes to Megabytes for clean numbers
    uint64 UsedPhysicalMB = MemStats.UsedPhysical / (1024 * 1024);
    uint64 PeakUsedPhysicalMB = MemStats.PeakUsedPhysical / (1024 * 1024);

    // 3. Grab current tracking count of active UObjects in the engine pool
    int32 ActiveUObjects = GUObjectArray.GetObjectArrayNum();

    // 4. Print the clean one-liner
    UE_LOG(LogTemp, Log, TEXT("[MEM TICK] Physical RAM: %llu MB (Peak: %llu MB) | Active UObjects: %d"),
        UsedPhysicalMB, PeakUsedPhysicalMB, ActiveUObjects);
}



// Helper structure to track connected rooms (Disjoint Set / Union-Find)
struct DisjointSet {
    TMap<FVector2D, FVector2D> Parent;

    FVector2D Find(FVector2D Point) {
        if (!Parent.Contains(Point)) {
            Parent.Add(Point, Point);
            return Point;
        }
        if (Parent[Point] == Point) return Point;
        Parent[Point] = Find(Parent[Point]); // Path compression
        return Parent[Point];
    }

    bool Union(FVector2D PointA, FVector2D PointB) {
        FVector2D RootA = Find(PointA);
        FVector2D RootB = Find(PointB);
        if (RootA == RootB) return false; // Already connected, adding this creates a loop!
        Parent[RootA] = RootB;
        return true;
    }
};

TArray<FCEdge> UGlobalBlueprintFunctionLibrary::GetMinimumSpanningTree(const TArray<FCTriangle>& Triangles)
{
    TArray<FCEdge> AllEdges;
    TArray<FCEdge> MST_Edges;

    // 1. Extract unique edges from your 80 triangles
    for (const FCTriangle& Tri : Triangles) {
        TArray<FCEdge> TriEdges = { {Tri.A, Tri.B}, {Tri.B, Tri.C}, {Tri.C, Tri.A} };
        for (FCEdge& NewEdge : TriEdges) {
            // Ensure consistent ordering (A always smaller than B) so duplicates match perfectly
            if (NewEdge.B.X < NewEdge.A.X || (NewEdge.B.X == NewEdge.A.X && NewEdge.B.Y < NewEdge.A.Y)) {
                Swap(NewEdge.A, NewEdge.B);
            }
            if (!AllEdges.Contains(NewEdge)) {
                AllEdges.Add(NewEdge);
            }
        }
    }

    // 2. Sort edges by squared distance (avoids expensive square roots)
    AllEdges.Sort([](const FCEdge& Left, const FCEdge& Right) {
        return FVector2D::DistSquared(Left.A, Left.B) < FVector2D::DistSquared(Right.A, Right.B);
        });

    // 3. Kruskal's Loop
    DisjointSet RoomNetwork;
    for (const FCEdge& Edge : AllEdges) {
        // If they aren't already connected, link them and keep the edge
        if (RoomNetwork.Union(Edge.A, Edge.B)) {
            MST_Edges.Add(Edge);
        }
    }

    return MST_Edges;
}

void UGlobalBlueprintFunctionLibrary::SortEdgesByDistance(UPARAM(ref) TArray<FCEdge>& Edges, bool bAscending)
{
    Edges.Sort([bAscending](const FCEdge& A, const FCEdge& B)
        {
            return bAscending ? A.Distance < B.Distance
                : A.Distance > B.Distance;
        });
}

FCEdge UGlobalBlueprintFunctionLibrary::MakeCEdge(FVector2D A, FVector2D B)
{
    FCEdge NewEdge;
    NewEdge.A = A;
    NewEdge.B = B;

    // The explicit, readable property assignment you wanted
    NewEdge.Distance = FVector2D::Distance(A, B);

    return NewEdge;
}