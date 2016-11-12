#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "block.hpp"

class Entity {

public:

    Entity(sf::Vector2<double>& position,
            sf::Vector2<double>& velocity, int mass);
    ~Entity();

    virtual void draw(sf::Window& window) const = 0;
    virtual std::vector<Block> get_blocks() const = 0;

    /*
     * Gets the velocity vector of the direction and speed
     * in which it wants to move.
     */
    virtual sf::Vector2<double> wants_to_move() const = 0;

    sf::Vector2<double> get_position() const;
    void set_position(const sf::Vector2<double>& position);
    int get_mass() const;

protected:

    sf::Vector2<double> position;
    int mass;

};

#endif
