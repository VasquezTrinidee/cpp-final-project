#include <iostream>
#include "character.h"
#include "enemy.h"

void battle(Character &player, Enemy enemy) {
    std::cout << "\n⚔️ A wild " << enemy.name << " appears!\n";

    while (player.health > 0 && enemy.health > 0) {
        int playerDamage = std::max(1, player.attack - enemy.defense);
        int enemyDamage = std::max(1, enemy.attack - player.defense);

        enemy.health -= playerDamage;
        std::cout << "You hit the " << enemy.name << " for " << playerDamage << " damage.\n";

        if (enemy.health <= 0) {
            std::cout << "You defeated the " << enemy.name << "!\n";
            player.score += 10;
            return;
        }

        player.health -= enemyDamage;
        std::cout << "The " << enemy.name << " hits you for " << enemyDamage << " damage.\n";
    }

    if (player.health <= 0)
        std::cout << "You were defeated!\n";
}
