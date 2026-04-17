#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Character.h"

class Player: public Character{
public:
    using Character::Character;
    Player();
};


#endif //PLAYER_H