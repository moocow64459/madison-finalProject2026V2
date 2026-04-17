#include "Player.h"

Player::Player() {
    // calls character constructor first
    // custom constructor
}

void Player::attack(Character& target, int damage) {
    target.takeDamage(damage);
}
