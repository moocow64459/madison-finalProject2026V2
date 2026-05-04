#include "Fists.h"

#include "../Character.h"

Fists::Fists() : Weapon("Fists") {
    setMinDamage(3);
    setMaxDamage(7);
}

void Fists::attack(Character &target) {
    target.takeDamage(randomDamage(*this));
}

//void Fists::defend() {
    // this is where a defensive call is stored
    // if defense > attack damage, no attack damage
    // if defense < attack damage, take damage
//}