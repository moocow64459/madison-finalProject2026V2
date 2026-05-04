#include "Player.h"

Player::Player() {
    // calls character constructor first
    // custom constructor
    xp = 0;
}

int Player::getXP() const {
    return xp;
}

void Player::setXP(const int exp){
    if (exp < 0) {
        xp = 0;
    }
    else xp = exp;
}

int Player::takeDamage(const int damage) {
    int health = getHealth();
    health -= damage;
    setHealth(health);
    setXP(getXP()-1);
    return getHealth();
}
