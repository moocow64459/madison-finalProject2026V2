#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Final Project WORKING TITLE", sf::Style::Close);

    // ------------------------- LOAD --------------------------------
    sf::Texture playerTexture("Assets/Player/Textures/spritesheet.png");
    sf::Sprite playerSprite(playerTexture);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear screen
        window.clear();

        window.draw(playerSprite);

        // Update the window
        window.display();
    }
}