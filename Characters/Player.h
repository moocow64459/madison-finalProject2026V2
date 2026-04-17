#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player: public Character{
public:
    using Character::Character;
    Player();

    void attack(Character &, int) override;
};


#endif //PLAYER_H