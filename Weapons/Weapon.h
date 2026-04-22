#ifndef WEAPON_H
#define WEAPON_H
#include <string>

using namespace std;

class Character;

class Weapon {
private:
    string weaponName;
    void setName(const string&);

public:
    virtual ~Weapon() = default;

    Weapon();
    Weapon(const string &);

    virtual void attack(Character&) = 0;
    virtual void defend() = 0;

    string getName() const;
};


#endif //WEAPON_H