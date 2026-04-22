#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "Weapon.h"

using namespace std;

// REMINDER non-virtual = same behavior every time in all derived classes
class Character {
protected:
    string name;
    int currentHealth;
    int maxHealth;

    Weapon* weapon;
public:
    Character();
    Character(const string&, int, int, Weapon*);

    virtual ~Character();

    virtual int takeDamage(int) = 0;

    int getHealth() const;
    int getMaxHealth() const;

    void setHealth(int);
};


#endif //CHARACTER_H