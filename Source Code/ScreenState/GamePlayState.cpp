/*
**   Được lập trình bởi Harding Adonis
**   File GamePlayState.cpp
**   Ngày tạo: 15/06/2018
*/

#include "GamePlayState.hpp"

namespace Adn
{
    GamePlayState::GamePlayState(GameDataRef data) :
        m_data(data)
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::init()
    {
        this->m_data->m_assets.loadFileTexture("PlayerSprite", Path_Texture_Entity + "PlayerSprite.png");

        p.create(this->m_data->m_assets.getTexture("PlayerSprite"));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::update()
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && p.getStatus() != Player::Status::Left)
            p.setState(Player::Status::Left);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && p.getStatus() != Player::Status::Right)
            p.setState(Player::Status::Right);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) && p.getStatus() != Player::Status::Up)
            p.setState(Player::Status::Up);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) && p.getStatus() != Player::Status::Down)
            p.setState(Player::Status::Down);


        this->p.update();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::draw()
    {
        this->m_data->m_window.clear();

        this->p.draw(this->m_data->m_window);

        this->m_data->m_window.display();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }
    }
}