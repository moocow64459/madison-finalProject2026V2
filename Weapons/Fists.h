#ifndef FISTS_H
#define FISTS_H
#include "Weapon.h"


class Fists : public Weapon {
public:
    void attack(Character &) override;
    void defend() override;
};


#endif //FISTS_H