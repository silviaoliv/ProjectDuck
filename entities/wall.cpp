#include "wall.hpp"

Wall::Wall(sf::Vector2<double> position, int height, int width)
    : Entity(position, WALL_MASS) {
    texture.setRepeated(true);
    texture.loadFromFile("assets/wall.png");
    sprite.setTexture(texture);
    sprite.setScale(width/10, height/10);
    sprite.setPosition(position.x, position.y);

    this->moved = false;
    this->height = height;
    this->width = width;
}

void Wall::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::Vector2<double> Wall::wants_to_move() const {
    if (!moved) return sf::Vector2<double>(0,0);
    return sf::Vector2<double>(0, -10);
}

std::vector<sf::Vector2<int>> Wall::get_blocks() const
{
    return std::vector<sf::Vector2<int>>();
}

void Wall::interact() {
    moved = true;
}

