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

public:
    Character();
    Character(const string&, int, int);

    virtual ~Character() = default;

    virtual int takeDamage(int) = 0;

    int getHealth() const;
    int getMaxHealth() const;

    void setHealth(int);
};


#endif //CHARACTER_H