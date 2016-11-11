#include <iostream>
#include <SFML/Window.hpp>
#include "entity.h"
#include "duck.h"
#include "level.h"

int main() {

    std::cout << "Hello World!" << std::endl;

    sf::Window window(sf::VideoMode(800, 600), "Hello my friend! :)", sf::Style::Close);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
    return 0;
}
