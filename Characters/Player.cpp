#include "Player.h"

Player::Player() {
    // calls character constructor first
    // custom constructor
    xp = 0;
}

int Player::getXP() {
    return xp;
}

void Player::setXP(const int exp){
    if (exp < 0) {
        xp = 0;
    }
    else xp = exp;
}

int Player::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    setXP(getXP()-1);
    return getHealth();
}
