#include <iostream>
#include "Characters/Player.h"
#include "Weapon.h"
#include "Characters/Enemy.h"
#include "Weapons/Fists.h"
#include "Weapons/ShortSword.h"

int main() {

    Player player1("Madison", 300, 300, new Fists());
    Enemy enemy1("Gene", 300, 300, new ShortSword());

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Enemy Health: " << enemy1.getHealth() << endl;

    cout << endl;
    player1.attack(enemy1);
    cout << "Enemy Health: " << enemy1.getHealth() << endl;

    enemy1.attack(player1);
    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Enemy Health: " << enemy1.getHealth() << endl;

    player1.attack(enemy1);
    cout << "Enemy Health: " << enemy1.getHealth() << endl;
    cout << endl;

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Enemy Health: " << enemy1.getHealth() << endl;

    return 0;
}
