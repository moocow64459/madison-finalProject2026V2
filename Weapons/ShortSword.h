#ifndef SHORTSWORD_H
#define SHORTSWORD_H
#include "../Weapon.h"


class ShortSword : public Weapon {
public:
    ShortSword();

    void attack(Character &) override;
};


#endif //SHORTSWORD_H