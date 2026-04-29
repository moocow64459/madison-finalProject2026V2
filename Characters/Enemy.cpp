#include "Enemy.h"

Enemy::Enemy() {
    //custom constructor
}

int Enemy::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
}

