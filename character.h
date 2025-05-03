#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

struct Character {
    std::string name;
    std::string charClass;
    int health;
    int maxHealth;
    int attack;
    int defense;
    int score;
};

#endif
