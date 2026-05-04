#ifndef FISTS_H
#define FISTS_H
#include "../Weapon.h"


class Fists : public Weapon {

public:
    Fists();

    void attack(Character &) override;
};


#endif //FISTS_H