/*
**   Được lập trình bởi Harding Adonis
**   File GamePlayState.cpp
**   Ngày tạo: 15/06/2018
*/

#include "GamePlayState.hpp"

namespace Adn
{
    GamePlayState::GamePlayState(GameDataRef data) :
        m_data(data),
        m_data_game(std::make_shared<GamePlayData>())
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::init()
    {
        this->m_data_game->m_assets = &this->m_data->m_assets;
        this->m_data_game->m_sounds = &this->m_data->m_sounds;
        this->m_data_game->m_target = &this->m_data->m_window;

        this->m_data_game->m_game.addGame(GamePlayRef(new CrovaniaVillage(this->m_data_game)));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::update()
    {
        this->m_data_game->m_game.handleGameChange();

        this->m_data_game->m_game.getActiveGame()->update();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data_game->m_game.getActiveGame()->draw();

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