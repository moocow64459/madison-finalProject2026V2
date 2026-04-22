#include "Weapon.h"

#include <random>

Weapon::Weapon() {
    weaponName = "WEAPON NAME";
}

Weapon::Weapon(const string &weaponName) {
    this->weaponName = weaponName;
}

int Weapon::randomDamage(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    uniform_int_distribution<> distrib(min,max);
    return distrib(gen);
}

string Weapon::getName() const {
    return weaponName;
}

void Weapon::setName(const string &name) {
    weaponName = name;
}
