#ifndef FISTS_H
#define FISTS_H
#include "../Weapon.h"


class Fists : public Weapon {
private:
    int fistsDamage = 5;
public:
    Fists() : Weapon("Fists") {}

    void attack(Character &) override;
    void defend() override;
};


#endif //FISTS_H