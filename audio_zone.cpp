#include "audio_zone.hpp"
#include <iostream>

AudioZone::AudioZone(sf::Vector2<double> position, sf::Vector2<double> size, bool duck, bool crab, std::string file)
{
    this->position = position;
    this->size = size;

    this->position = position;
    this->duck = duck;
    this->crab = crab;

    if(!sound_buffer.loadFromFile(file))
    {
        std::cout << "Failed to load sound" << std::endl;
    }
    std::cout << sound_buffer.getSampleCount() << "    "<< sound_buffer.getSampleRate() << std::endl;

    //sf::Sound sound;
    sound.setBuffer(sound_buffer);
    sound.setVolume(100);
    sound.setPitch(1.0);
    sound.setLoop(true);
    sound.play();

    std::cout << sound.getStatus() << std::endl;
}


void AudioZone::try_play(sf::Vector2<double> crab_pos, sf::Vector2<double> duck_pos) 
{
    if(duck)
    {
        try_play_generic(duck_pos);
    }
    if(crab)
    {
        try_play_generic(crab_pos);
    }
}


void AudioZone::try_play_generic(sf::Vector2<double> pos) 
{
    if(
            !this->has_played &&
            pos.x > position.x &&
            pos.y > position.y &&
            pos.x < position.x + size.x &&
            pos.y < position.y + size.y
        )
    {
        std::cout << "playing sound" << std::endl;
        this->has_played = true;

        sf::Sound sound;
        sound.setBuffer(sound_buffer);
        sound.play();
    }
}

