//   Được lập trình bởi Harding Adonis
//   File MainMenuState.cpp
//   Ngày tạo: 07/06/2018

#include "MainMenuState.hpp"

namespace Adn
{
    MainMenuState::MainMenuState(GameDataRef data) :
        m_data(data)
    {
    }

    void MainMenuState::init()
    {
        this->m_data->m_assets.loadFileTexture(L"Tiêu Đề Game", Path_Texture_Graphics + "TitleGame.png");


        this->m_title_game.setTexture(this->m_data->m_assets.getTexture(L"Tiêu Đề Game"));
        this->m_title_game.setOrigin(250.f, 70.f);
        this->m_title_game.setPosition(Screen_Width / 2, Screen_Height / 2 - 180);
    }

    void MainMenuState::update()
    {

    }

    void MainMenuState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title_game);

        this->m_data->m_window.display();
    }

    void MainMenuState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }
    }
}