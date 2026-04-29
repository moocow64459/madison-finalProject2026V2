#ifndef PLAYER_H
#define PLAYER_H

#include "../Character.h"

class Player: public Character {
private:
    int xp;
public:
    using Character::Character;
    Player();

    int getXP();
    void setXP(int);
    int takeDamage(int) override;
};


#endif //PLAYER_H