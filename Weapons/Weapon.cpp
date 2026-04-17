#include "Weapon.h"

Weapon::Weapon() {
    weaponName = "WEAPON NAME";
    damageModifier = 1;
}

Weapon::Weapon(const string &weaponName, const int damageModifier) {
    this->weaponName = weaponName;
    this->damageModifier = damageModifier;
}
