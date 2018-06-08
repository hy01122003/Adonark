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

    }

    void MainMenuState::update()
    {

    }

    void MainMenuState::draw()
    {
        this->m_data->m_window.clear();

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