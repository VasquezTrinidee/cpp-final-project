#include <iostream>
#include <fstream>
#include "character.h"

void saveGame(const Character &player) {
    std::ofstream outFile("save.txt");
    if (outFile.is_open()) {
        outFile << player.name << "\n"
                << player.charClass << "\n"
                << player.health << "\n"
                << player.maxHealth << "\n"
                << player.attack << "\n"
                << player.defense << "\n"
                << player.score << "\n";
        std::cout << "💾 Game saved.\n";
    } else {
        std::cout << "❌ Error saving game.\n";
    }
}

bool loadGame(Character &player) {
    std::ifstream inFile("save.txt");
    if (inFile.is_open()) {
        inFile >> std::ws;
        getline(inFile, player.name);
        getline(inFile, player.charClass);
        inFile >> player.health >> player.maxHealth >> player.attack >> player.defense >> player.score;
        std::cout << "📂 Game loaded.\n";
        return true;
    } else {
        std::cout << "⚠️ No save file found.\n";
        return false;
    }
}
