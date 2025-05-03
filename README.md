# C++ Text-Based RPG – Final Project

Welcome to my final C++ project — a modular, text-based RPG adventure built with structured programming and creativity in mind!

##  Game Overview

You play as a hero venturing into a mysterious land, encountering random events, battling enemies, and collecting points. The game features exploration, turn-based combat, and a save/load system to continue your journey later.

---

##  Features

-  **Custom Character Creation**
-  **Explore Mode**: Random events and battles
-  **Battle System**: Turn-based combat with enemies
-  **Save/Load System**: Save progress to a file and resume later
-  **Modular Codebase**: Split into multiple `.cpp` and `.h` files for clarity
-  **Input Validation & Error Handling**

---

##  File Structure
cpp-final-project/
├── main.cpp # Main menu & game loop
├── battle.cpp # Combat system
├── explore.cpp # Random exploration events
├── saveLoad.cpp # Save/load system using file I/O
├── character.h # Player character structure
├── enemy.h # Enemy structure
└── README.md # Project overview and instructions


---

##  How to Compile and Run in CodeSpaces

1. Open the CodeSpace and terminal.
2. Compile the game using:

   ```bash
   g++ main.cpp battle.cpp explore.cpp saveLoad.cpp -o rpg_game

