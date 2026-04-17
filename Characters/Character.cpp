#include "Character.h"

#include <iostream>

Character::Character() {
    name = "CHARACTER NAME";
    maxHealth = 200;
    currentHealth = maxHealth;
}

Character::Character(const string &CharacterName, const int currHealth, const int max) {
    name = CharacterName;
    currentHealth = currHealth;
    maxHealth = max;
}

int Character::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
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
