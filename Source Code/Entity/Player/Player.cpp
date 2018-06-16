/*
**   Được lập trình bởi Harding Adonis
**   File Player.cpp
**   Ngày tạo: 16/06/2018
*/

#include "Player.hpp"

namespace Adn
{
    Player::Player()
    {
    }

    Player::Player(sf::Texture& texture)
    {
        this->create(texture);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Player::create(sf::Texture& texture)
    {
        this->m_sprite.setTexture(texture);

        this->m_sprite.setTextureRect({ 0, 0, 32, 48 });

        this->m_animation.create(0.2, { 0, 0, 32, 48 }, 4);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Player::update()
    {
        this->m_sprite.setTextureRect(this->m_animation.getIntRect());
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    unsigned int Player::getHP() const
    {
        return this->m_HP;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    unsigned int Player::getMP() const
    {
        return this->m_MP;
    }
}