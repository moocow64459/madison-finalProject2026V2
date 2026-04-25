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

int Character::takeDamage(int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
}

// character owns action, weapon defines behavior
void Character::attack(Character &target) const {
    if (this != target) {
        weapon->attack(target);
    }
}

int Character::getHealth() const {
    return currentHealth;
}

int Character::getMaxHealth() const {
    return maxHealth;
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

bool Character::operator==(const Character *character) const {
    return this == character;
}