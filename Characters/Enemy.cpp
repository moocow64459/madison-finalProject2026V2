#include "Enemy.h"

Enemy::Enemy() {
    // constructor to run after character
    spawnProbability = 0;
}

Enemy::Enemy(const int prob) {
    spawnProbability = prob;
}

void Enemy::setSpawnProbability(const int prob) {
    spawnProbability = prob;
}

int Enemy::getSpawnProbability() const {
    return spawnProbability;
}
