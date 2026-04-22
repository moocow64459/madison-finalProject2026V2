#ifndef FISTS_H
#define FISTS_H
#include "../Weapon.h"


class Fists : public Weapon {
private:
    int fistsDamageMin = 3;
    int fistsDamageMax = 7;
public:
    Fists() : Weapon("Fists") {}

    void attack(Character &) override;

};


#endif //FISTS_H