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

void Character::attack(Character& target) {

}

int Character::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
}

void Character::setHealth(const int health) {
    currentHealth = health;
}

int Character::getHealth() const {
    return currentHealth;
}
