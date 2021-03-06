#ifndef CRAB_H
#define CRAB_H

#include "entity.hpp"
#include "constants.hpp"

const static int CRAB_MASS = 3;

class Crab : public Entity {

public:

    Crab(sf::Vector2<double> position);

    virtual void draw(sf::RenderWindow& window) override;
    virtual std::vector<sf::Vector2<int>> get_blocks() const override;
    virtual sf::Vector2<double> wants_to_move() const override;

private:
    sf::Sprite sprite;
    sf::Texture texture;
};

#endif
