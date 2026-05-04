#include "Weapon.h"

#include <ostream>
#include <random>

Weapon::Weapon() {
    weaponName = "WEAPON NAME";
}

Weapon::Weapon(const string &weaponName) {
    this->weaponName = weaponName;
}

int Weapon::randomDamage(const Weapon& weapon) {
    int min= weapon.getMinDamage();
    int max = weapon.getMaxDamage();
    std::random_device rd;
    std::mt19937 gen(rd());
    uniform_int_distribution<> distrib(min,max);
    return distrib(gen);
}

string Weapon::getName() const {
    return weaponName;
}

int Weapon::getMinDamage() const {
    return damageMin;
}

int Weapon::getMaxDamage() const {
    return damageMax;
}

void Weapon::setMinDamage(int mindmg) {
    damageMin = mindmg;
}

void Weapon::setMaxDamage(int maxdmg) {
    damageMax = maxdmg;
}

void Weapon::setName(const string &name) {
    weaponName = name;
}

std::ostream & operator<<(std::ostream &os, const Weapon &weapon) {
    os << "Weapon Type: " << weapon.getName() << endl;
    os << "Damage: " << weapon.getMinDamage() << "-" << weapon.getMaxDamage() << endl;
    return os;
}
