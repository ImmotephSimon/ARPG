// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SecondTopDownTarget : TargetRules
{
    public SecondTopDownTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;

        // Upgrade to UE5.7
        DefaultBuildSettings = BuildSettingsVersion.V6;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_7;

        ExtraModuleNames.AddRange(new string[] { "SecondTopDown" });
    }
}