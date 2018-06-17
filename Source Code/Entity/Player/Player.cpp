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

        this->m_sprite.setOrigin(16.f, 24.f);

        this->m_animation.create(0.2f, { 0, 0, 32, 48 }, 4);

        this->m_status = Status::Down;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Player::update()
    {
        if (this->m_status == Status::None)
            this->m_animation.setCurrentFrame(0);

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

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Player::Status Player::getStatus() const
    {
        return this->m_status;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Player::setState(Player::Status status)
    {
        this->m_status = status;

        switch (this->m_status)
        {
        case Status::Down:
            this->m_animation.create(0.2f, { 0, 0, 32, 48 }, 4);
            break;

        case Status::Left:
            this->m_animation.create(0.2f, { 0, 48, 32, 48 }, 4);
            break;

        case Status::Right:
            this->m_animation.create(0.2f, { 0, 96, 32, 48 }, 4);
            break;

        case Status::Up:
            this->m_animation.create(0.2f, { 0, 144, 32, 48 }, 4);
            break;
        }
    }
}