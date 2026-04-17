#include "Player.h"

#include <iostream>

Player::Player() {
    // calls character constructor first
    // custom constructor
}

void Player::attack(Character& target) {
    target.takeDamage(target.getHealth() / numberOfHits);
}
