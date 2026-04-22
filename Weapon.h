#ifndef WEAPON_H
#define WEAPON_H
#include <string>

// did we learn about forward declaration?
class Character;

using namespace std;

class Weapon {
private:
    string weaponName;
    void setName(const string&);

public:
    Weapon();
    Weapon(const string &);

    virtual ~Weapon() = default;

    virtual void attack(Character&) = 0;
    virtual void defend() = 0;

    string getName() const;
};


#endif //WEAPON_H