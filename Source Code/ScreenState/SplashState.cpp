//   Được lập trình bởi Harding Adonis
//   File SplashState.cpp
//   Ngày tạo: 05/06/2018

#include <iostream>
#include "SplashState.hpp"

namespace Adn
{
    SplashState::SplashState(GameDataRef data) :
        m_data(data)
    {
    }

    void SplashState::init()
    {
        this->m_data->m_assets.loadFileTexture(L"SplashBackground", Path_Texture_Graphics + "SplashBackground.png");

        this->m_sprite.setTexture(this->m_data->m_assets.getTexture(L"SplashBackground"));
    }

    void SplashState::update()
    {
        if (this->m_timer.getElapsedTime().asSeconds() > 2.f)
        {
            this->m_timer.restart();
            this->m_data->m_state.addState(Ado::BaseStateRef(new MainMenuState(this->m_data)));
        }
    }

    void SplashState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();
        }
    }

    void SplashState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_sprite);

        this->m_data->m_window.display();
    }
}