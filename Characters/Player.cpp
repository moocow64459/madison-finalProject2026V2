#include "Player.h"

#include <iostream>

Player::Player() {
    // calls character constructor first
    // custom constructor
}

void Player::attack(Character& target) {
    cout << "Target Health: " << target.getHealth() << endl;
    target.takeDamage(target.getHealth() / 10);
    cout << "Hit! Target Health: " << target.getHealth() << endl;
}
