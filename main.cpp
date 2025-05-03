#include <iostream>
#include <cstdlib>
#include <ctime>
#include "character.h"
#include "enemy.h"

void exploreArea(Character &player);
void battle(Character &player, Enemy enemy);
void saveGame(const Character &player);
bool loadGame(Character &player);

int main() {
    srand(time(0));
    Character player;
    std::string input;

    std::cout << "🎮 Welcome to the Text-Based RPG!\n";
    std::cout << "Load previous game? (yes/no): ";
    std::getline(std::cin, input);

    if (input == "yes" && loadGame(player)) {
        std::cout << "Welcome back, " << player.name << " the " << player.charClass << "!\n";
    } else {
        std::cout << "Enter your character's name: ";
        std::getline(std::cin, player.name);
        std::cout << "Choose a class (Warrior, Mage, Thief): ";
        std::getline(std::cin, player.charClass);

        player.health = player.maxHealth = 30;
        player.attack = 10;
        player.defense = 5;
        player.score = 0;
    }

    while (true) {
        std::cout << "\n== Main Menu ==\n";
        std::cout << "1. Explore\n2. Save Game\n3. Exit\n";
        std::cout << "Choose an option: ";
        std::getline(std::cin, input);

        if (input == "1") {
            exploreArea(player);
            if (player.health <= 0) {
                std::cout << "Game Over!\n";
                break;
            }
        } else if (input == "2") {
            saveGame(player);
        } else if (input == "3") {
            std::cout << "Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}
