#include "ShortSword.h"

#include "../Character.h"

void ShortSword::attack(Character &target) {
    // this is where the weapon will deal damage
    target.takeDamage(randomDamage(shortSwordDamageMin, shortSwordDamageMax));
}

//void Fists::defend() {
// this is where a defensive call is stored
// if defense > attack damage, no attack damage
// if defense < attack damage, take damage
//}