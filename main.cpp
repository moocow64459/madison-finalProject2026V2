#include <iostream>
#include <random>
#include <sstream>
#include <stdexcept>
#include <SFML/Audio/Music.hpp>
#include <SFML/Graphics.hpp>

#include "Button.h"
#include "Characters/Player.h"
#include "Characters/Enemy.h"
#include "Weapons/Fists.h"

int random(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    uniform_int_distribution distrib(min,max);
    return distrib(gen);
}

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Madison's Final Project", sf::Style::Close);

    //window.setIcon();
    window.setPosition(sf::Vector2i(-10,0));

    // Music
    sf::Music menuMusic("Assets/MainMenu/pixelmist.flac");
    menuMusic.setVolume(35);
    menuMusic.setLooping(true);
    menuMusic.play();

    // Background
    sf::RectangleShape background(sf::Vector2f(window.getSize().x, window.getSize().y));
    sf::Texture backgroundTexture("Assets/MainMenu/dark_night.png");
    background.setTexture(&backgroundTexture);

    // Text
    sf::Font pixelFont("Assets/Fonts/PublicPixel.ttf");
    sf::Text text(pixelFont);
    text.setCharacterSize(30);
    text.setPosition({700,300});

    // Player 1
    Player player1("Player 1", 300, 300, new Fists());
    std::ostringstream beginningInfo;
    beginningInfo << "WELCOME.\n"
        << (player1);
    text.setString(beginningInfo.str());

    int exploreCount = 0;
    bool enemyActive = false;
    Enemy* currentEnemy = nullptr;

    int chanceOfEnemy = random(3, 6);

    // Top Button
    Button button1(960, 544);
    sf::Texture button1_texture("Assets/MainMenu/explore_button.png");
    button1.setButtonTexture(button1_texture);

    // Middle Button
    Button button2(960, 686);
    sf::Texture button2_texture("Assets/MainMenu/attack_button.png");
    button2.setButtonTexture(button2_texture);

    // Bottom Button
    Button button3(960, 828);
    sf::Texture button3_texture("Assets/MainMenu/info_button.png");
    button3.setButtonTexture(button3_texture);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
               window.close();

            else if (button1.isClicked(*event, window)) {
                // explore
                try {
                    if (enemyActive) {
                        throw std::logic_error("You cannot explore \nwhile an enemy is in \nfront of you.");
                    }

                    exploreCount++;

                    if (exploreCount >= chanceOfEnemy) {
                        if (currentEnemy == nullptr) {
                            currentEnemy = new Enemy("Goblor", 100, 100, new Fists());
                        }
                        enemyActive = true;
                        {
                            std::ostringstream hud;
                            hud << "An enemy approaches!\n\n"
                                << (*currentEnemy);
                            text.setString(hud.str());
                        }
                        exploreCount = 0;   // reset for if block to work
                    }
                    else {
                        text.setString("You explore the woods \nin front of you.");
                    }
                }
                catch (const std::logic_error& e) {
                    text.setString(e.what());
                }
            }

            else if (button2.isClicked(*event, window)) {
                // attack
                if (enemyActive && currentEnemy != nullptr) {
                    player1.attack(*currentEnemy);
                    if (currentEnemy->isDead()) {
                        std::ostringstream hud;
                        hud << "You attack and defeat\n"
                            << (currentEnemy->getName()) << ".";
                        text.setString(hud.str());

                        if (player1 > currentEnemy) {
                            Player::isWinner();
                        }

                        delete currentEnemy;
                        currentEnemy = nullptr;
                        enemyActive = false;
                    }
                    else {
                        std::ostringstream hud;
                        hud << "You attack the enemy.\n"
                            << (*currentEnemy);
                        text.setString(hud.str());
                    }
                }
                else {
                    text.setString("There is no enemy to attack.");
                }
            }
            else if (button3.isClicked(*event, window)) {
                Weapon* weapon = (player1.getWeapon());
                std::ostringstream info;
                info << player1
                     << endl
                     << *weapon;
                text.setString(info.str());
            }
        }

        // Clear screen
        window.clear();

        window.draw(background);
        window.draw(text);
        window.draw(button1);
        window.draw(button2);
        window.draw(button3);

        // Update the window
        window.display();
    }

    delete currentEnemy;
}
