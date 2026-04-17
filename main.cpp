#include <iostream>

#include "Characters/Player.h"

int main() {
    Player player1("Madison", 100, 100);
    Player player2("Billy", 500, 500);

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 2 Health: " << player2.getHealth() << endl;

    cout << "Player 1 Attacking Player 2"<< endl;
    player1.attack(player2);

    cout << "Player 2 Attacking Player 1"<< endl;
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);
    player2.attack(player1);


    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 2 Health: " << player2.getHealth() << endl;
    

    return 0;
}
