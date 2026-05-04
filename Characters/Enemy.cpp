#include "Enemy.h"

Enemy::Enemy() {
    //custom constructor
}

int Enemy::takeDamage(const int damage) {
    int health = getHealth();
    health -= damage;
    setHealth(health);
    return getHealth();
}

