#include "Character.h"

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

void Character::attack(const Character& opponent) {
    // opponent is the character you are attacking
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
