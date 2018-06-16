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
        this->m_game_play = new CrovaniaVillage(&this->m_data->m_window, this->m_data->m_assets);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::update()
    {
        this->m_game_play->update();

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::draw()
    {
        this->m_data->m_window.clear();

        this->m_game_play->draw();

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