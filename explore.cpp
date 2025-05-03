#include <iostream>
#include <cstdlib>
#include <ctime>
#include "character.h"
#include "enemy.h"

void battle(Character &player, Enemy enemy); // Forward declaration

void exploreArea(Character &player) {
    std::cout << "\n🌲 You explore the area...\n";

    int event = rand() % 3;
    if (event == 0) {
        std::cout << "You found a potion! Health restored.\n";
        player.health = std::min(player.health + 10, player.maxHealth);
    } else if (event == 1) {
        Enemy goblin = {"Goblin", 15, 5, 1};
        battle(player, goblin);
    } else {
        std::cout << "It's quiet... too quiet.\n";
    }
}
