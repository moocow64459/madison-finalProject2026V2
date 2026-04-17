#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

using namespace std;

class Character {
private:
    string name;
    int currentHealth;
    int maxHealth;

    void setHealth(int);
public:
    Character();
    Character(const string&, int, int);

    void attack(const Character&);
    int takeDamage(int);

    int getHealth() const;
};


#endif //CHARACTER_H