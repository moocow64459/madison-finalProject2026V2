#include "CharacterSpawner.h"

CharacterSpawner::CharacterSpawner() {
    enemy = nullptr;
}

CharacterSpawner::CharacterSpawner(Enemy *enemyType) {
    enemy = enemyType;
}

Enemy* CharacterSpawner::spawnEnemy() {
    return new Enemy();
}
