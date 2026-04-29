#ifndef ENEMY_H
#define ENEMY_H

#include "../Character.h"

class Enemy : public Character {
    using Character::Character;
    Enemy();

    int takeDamage(int) override;
};


#endif //ENEMY_H