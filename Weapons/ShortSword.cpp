#include "ShortSword.h"

#include "../Character.h"
ShortSword::ShortSword() : Weapon("Short Sword") {
    setMinDamage(8);
    setMaxDamage(12);
}

void ShortSword::attack(Character &target) {
    target.takeDamage(randomDamage(*this));
}

//void Fists::defend() {
// this is where a defensive call is stored
// if defense > attack damage, no attack damage
// if defense < attack damage, take damage
//}