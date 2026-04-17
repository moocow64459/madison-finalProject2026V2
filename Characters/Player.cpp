#include "Player.h"

Player::Player() {
    // calls character constructor first
    // custom constructor
}

void Player::attack(Character& target) {
    target.takeDamage(numberOfHits);
}
