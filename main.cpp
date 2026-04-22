#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    // Create the main window
    sf::RenderWindow window(desktop, "Final Project WORKING TITLE", sf::Style::Close);

    // ------------------------- LOAD --------------------------------
    sf::Texture playerTexture;

    if (!playerTexture.loadFromFile("Assets/Player/Textures/spritesheet.png")) {
        std::cerr << "ERROR: COULD NOT LOAD FILE:: Assets/Player/Textures/spritesheet.png" << std::endl;
        return -1;
    }
    sf::Sprite playerSprite(playerTexture);

    playerSprite.setTextureRect(sf::IntRect({{448, 0}, {64, 64}}));
    playerSprite.setOrigin({32,32});
    playerSprite.setPosition({100, 100});

    playerSprite.setScale({5, 5});

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