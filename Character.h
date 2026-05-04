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

    void attack(Character& target) const;
    virtual int takeDamage(int) = 0;
    bool isDead() const;

    string getName() const;
    Weapon *getWeapon() const;

    int getHealth() const;
    int getMaxHealth() const;

    void setHealth(int);

    bool operator>(const Character*) const;
    friend std::ostream& operator<<(std::ostream&, const Character&);
};


#endif //CHARACTER_H