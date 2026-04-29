#include "Player.h"

Player::Player() {
    // calls character constructor first
    // custom constructor
    xp = 0;
}

int Player::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
}
