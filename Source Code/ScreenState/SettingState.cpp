//   Được lập trình bởi Harding Adonis
//   File SettingState.cpp
//   Ngày tạo: 11/06/2018

#include "SettingState.hpp"

namespace Adn
{
    SettingState::SettingState(GameDataRef data) :
        m_data(data)
    {
    }

    void SettingState::init()
    {
        this->m_title.setOrigin(this->m_title.getGlobalBounds().width / 2, this->m_title.getGlobalBounds().height / 2);
        this->m_title.setPosition(Screen_Width / 2, Screen_Height / 2 - 180);
    }

    void SettingState::update()
    {

    }

    void SettingState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title);

        this->m_data->m_window.display();
    }

    void SettingState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }
    }
}