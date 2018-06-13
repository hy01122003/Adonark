//   Được lập trình bởi Harding Adonis
//   File InforAboutGameState.cpp
//   Ngày tạo: 11/06/2018

#include "InforAboutGameState.hpp"

namespace Adn
{
    InforAboutGameState::InforAboutGameState(GameDataRef data) :
        m_data(data)
    {
    }

    void InforAboutGameState::init()
    {
        this->m_title.setOrigin(this->m_title.getGlobalBounds().width / 2, this->m_title.getGlobalBounds().height / 2);
        this->m_title.setPosition(Screen_Width / 2, Screen_Height / 2 - 180);
    }

    void InforAboutGameState::update()
    {

    }

    void InforAboutGameState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title);

        this->m_data->m_window.display();
    }

    void InforAboutGameState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }

    }
}