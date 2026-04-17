#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <utility>

using namespace std;
class Weapon {
private:
    string weaponName;
    int damageModifier;
    // TODO - when blocking is implemented
    // int blockModifier;
    void setName(string);
    void setDamageModifier(int);

public:
    Weapon();
    Weapon(const string &, int);

    string getName();
    int getDamageModifier();
};


#endif //WEAPON_H