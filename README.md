# ARPG Systems Framework (UE5.7)

A modular, data-driven framework focused on decoupled systems and real-time logic.

### Architectural Features:
* **Component-Based Design:** Attribute and Ability systems encapsulated in Actor Components to avoid "God Object" patterns.
* **Data-Driven Logic:** System constants and item scaling managed via Data Tables/Structs for easy iteration and externalization.
* **Event-Driven UI/Logic:** Utilized Delegates and Blueprint Interfaces to eliminate Tick-dependency and optimize CPU overhead.

> **Note on Version Control:** Logic is implemented via Blueprints (.uasset). Architectural changes, refactors, and logic flows are documented through detailed, atomic commit messages.