#ifndef SHORTSWORD_H
#define SHORTSWORD_H
#include "../Weapon.h"


class ShortSword : public Weapon {
private:
    int shortSwordDamageMin = 8;
    int shortSwordDamageMax = 12;
public:
    ShortSword() : Weapon("Short Sword") {}

    void attack(Character &) override;

};


#endif //SHORTSWORD_H