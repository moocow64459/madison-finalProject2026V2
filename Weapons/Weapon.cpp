#include "Weapon.h"

Weapon::Weapon() {
    weaponName = "WEAPON NAME";
}

Weapon::Weapon(const string &weaponName) {
    this->weaponName = weaponName;
}

string Weapon::getName() const {
    return weaponName;
}

void Weapon::setName(const string &name) {
    weaponName = name;
}
