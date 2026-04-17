#include <iostream>

#include "Characters/Player.h"

int main() {
    Player player1;

    cout << "Health: " << player1.getHealth() << endl;
    cout << "Take 10 damage." << endl;

    player1.takeDamage(10);

    cout << "Health: " << player1.getHealth() << endl;

    return 0;
}
