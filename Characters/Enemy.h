#ifndef ENEMY_H
#define ENEMY_H
#include "../Character.h"


class Enemy : public Character {
private:
    int spawnProbability;
public:
    using Character::Character;
    Enemy();
    Enemy(int);

    void setSpawnProbability(int);
    int getSpawnProbability() const;
};


#endif //ENEMY_H