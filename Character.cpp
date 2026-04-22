#include "Character.h"
#include <iostream>
#include "Weapons/Fists.h"

Character::Character() {
    name = "CHARACTER NAME";
    maxHealth = 200;
    currentHealth = maxHealth;
    weapon = new Fists();
}

Character::Character(const string &CharacterName, const int currHealth, const int max, Weapon* weaponType) {
    name = CharacterName;
    currentHealth = currHealth;
    maxHealth = max;
    weapon = weaponType;
}

Character::~Character() {
    delete weapon;
}

void Character::setHealth(const int health) {
    if (health >= maxHealth) {
        currentHealth = maxHealth;
    }
    if (health < 0) {
        currentHealth = 0;
    }
    else {
        currentHealth = health;
    }
}

int Character::getHealth() const {
    return currentHealth;
}

int Character::getMaxHealth() const {
    return maxHealth;
}
