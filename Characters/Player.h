#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player: public Character{
private:
    int numberOfHits = getMaxHealth() / 15;
public:
    using Character::Character;
    Player();

    void attack(Character &) override;
};


#endif //PLAYER_H