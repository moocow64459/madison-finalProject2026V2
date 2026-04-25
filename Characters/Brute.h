#ifndef BADGUY_H
#define BADGUY_H
#include "Enemy.h"


class Brute : public Enemy{
    void setSpawnProbability() override;
};


#endif //BADGUY_H