#ifndef CHARACTERSPAWNER_H
#define CHARACTERSPAWNER_H
#include "Enemy.h"


class CharacterSpawner {
private:
    Enemy* enemy;
public:
    CharacterSpawner();
    CharacterSpawner(Enemy*);

    Enemy* spawnEnemy();
};


#endif //CHARACTERSPAWNER_H