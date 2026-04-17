#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player {
private:
    string name;
    int currentHealth;
    int maxHealth;

    void setHealth(int);
public:
    Player();
    Player(const string&, int, int);

    void attack();
    int takeDamage(int);

    int getHealth() const;
};


#endif //PLAYER_H