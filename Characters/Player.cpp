#include "Player.h"

Player::Player() {
    name = "PLAYER NAME";
    maxHealth = 200;
    currentHealth = maxHealth;
}

Player::Player(const string &playerName, const int currHealth, const int max) {
    name = playerName;
    currentHealth = currHealth;
    maxHealth = max;
}

void Player::attack() {

}

int Player::takeDamage(const int damage) {
    setHealth(currentHealth -= damage);
    return getHealth();
}

void Player::setHealth(int health) {
    currentHealth = health;
}

int Player::getHealth() const {
    return currentHealth;
}
