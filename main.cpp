#include <iostream>
#include <SFML/Audio/Music.hpp>
#include <SFML/Graphics.hpp>

#include "Button.h"
#include "Characters/Player.h"
#include "Weapons/Fists.h"

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Final Project WORKING TITLE", sf::Style::Close);

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
    text.setString("Hello.");

    Player player1("Player 1", 300, 300, new Fists());
    // std::cout << player1;

    int exploreCount = 0;

    // Start the game loop
    while (window.isOpen())
    {
        // Top Button
        Button button1(960, 544);
        sf::Texture button1_texture("Assets/MainMenu/buttonV1.png");
        button1.setButtonTexture(button1_texture);

        // Middle Button
        Button button2(960, 686);
        sf::Texture button2_texture("Assets/MainMenu/buttonV1.png");
        button2.setButtonTexture(button2_texture);

        // Bottom Button
        Button button3(960, 828);
        sf::Texture button3_texture("Assets/MainMenu/buttonV1.png");
        button3.setButtonTexture(button3_texture);

        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
               window.close();

            else if (button1.isClicked(*event, window)) {
                // explore
                exploreCount++;
                if (exploreCount % 3 == 0) {
                    text.setString("An enemy approaches!");
                }
                else {
                    text.setString("You explore the woods in front of you.");
                }
            }

            else if (button2.isClicked(*event, window)) {
                // attack
                text.setString("Button 2 Pressed.");
            }

            else if (button3.isClicked(*event, window)) {
                // change weapon?
                text.setString("Button 3 Pressed.");
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
}
