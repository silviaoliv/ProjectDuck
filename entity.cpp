#include "entity.hpp"

Entity::Entity(sf::Vector2<double>& position,
            sf::Vector2<double>& velocity, int mass) {
    this->mass = mass;
    this->position = position;
    this->velocity = velocity;
}

sf::Vector2<double> Entity::get_position() const {
    return position;
}


void Entity::set_position(const sf::Vector2<double>& position) {
    this->position = position;
}


int Entity::get_mass() const {
    return mass;
}
