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

// character owns action, weapon defines behavior
void Character::attack(Character &target) const {
    if (&target != this) {      // prevent self attack
        weapon->attack(target);
    }
}

bool Character::isDead() const {
    return currentHealth <= 0;
}

string Character::getName() const {
    return name;
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
    else if (health < 0) {
        currentHealth = 0;
    }
    else {
        currentHealth = health;
    }
}

bool Character::operator>(const Character *other) const {
    if (this->getHealth() > other->getHealth()) {
        return true;
    }
    else return false;
}

std::ostream & operator<<(std::ostream &os, const Character &character) {
    os << character.name << "'s Character Info: " << endl;
    os << "Health: " << character.getHealth() << "/" << character.getMaxHealth() << endl;
    return os;
}
