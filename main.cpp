#include <iostream>
#include "Characters/Player.h"
#include "Weapon.h"


int main() {
    // at 300 health, number of hits is 12 with no weapon modifier
    Player player1("Madison", 300, 300);
    Player player2("Billy", 500, 500);

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 2 Health: " << player2.getHealth() << endl;

    return 0;
}
