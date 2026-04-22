#include "Fists.h"

#include "../Character.h"

void Fists::attack(Character &target) {
    // this is where the weapon will deal damage
    target.takeDamage(fistsDamage);
}

void Fists::defend() {
    // this is where a defensive call is stored
    // if defense > attack damage, no attack damage
    // if defense < attack damage, take damage
}