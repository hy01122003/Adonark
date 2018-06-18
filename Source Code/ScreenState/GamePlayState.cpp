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

        this->m_exit_game = false;

        this->m_data_game->m_game.addGame(GamePlayRef(new CrovaniaVillage(this->m_data_game)));
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::update()
    {
        this->m_data_game->m_game.handleGameChange();

        this->m_data_game->m_game.getActiveGame()->update();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
        {
            this->m_data_game->m_game.removeAllGame();

            auto view = this->m_data->m_window.getView();
            view.setCenter(Screen_Width / 2, Screen_Height / 2);
            this->m_data->m_window.setView(view);

            this->m_data->m_state.removeState();

            this->m_exit_game = true;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void GamePlayState::draw()
    {
        this->m_data->m_window.clear();

        if (!this->m_exit_game)
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