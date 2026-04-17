#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

// REMINDER non-virtual = same behavior every time in all derived classes
class Character {
private:
    string name;
    int currentHealth;
    int maxHealth;

    void setHealth(int);
public:
    Character();
    Character(const string&, int, int);

    virtual ~Character() = default;

    virtual void attack(Character&, int) = 0;  // pure virtual = must implement
    int takeDamage(int);

    int getHealth() const;
};


#endif //CHARACTER_H