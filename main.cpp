#include <iostream>
#include "Characters/Player.h"
#include "Weapon.h"
#include "Weapons/Fists.h"


int main() {

    Player player1("Madison", 300, 300, new Fists());
    Player player2("Gene", 300, 300, new Fists());

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 2 Health: " << player2.getHealth() << endl;

    player2.attack(player2);

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 2 Health: " << player2.getHealth() << endl;

    return 0;
}
