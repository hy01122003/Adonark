//   Được lập trình bởi Harding Adonis
//   File InforAboutGameState.cpp
//   Ngày tạo: 11/06/2018

#include "InforAboutGameState.hpp"

namespace Adn
{
    InforAboutGameState::InforAboutGameState(GameDataRef data) :
        m_data(data),
        m_title(L"Thông Tin Game", m_data->m_assets.getFont(L"Font Pixel Việt Hóa"), 50),
        m_gui(this->m_data->m_window),
        m_button_back(tgui::Button::create(L"Trở Về"))
    {
    }

    void InforAboutGameState::init()
    {
        this->m_title.setOrigin(this->m_title.getGlobalBounds().width / 2, this->m_title.getGlobalBounds().height / 2);
        this->m_title.setPosition(Screen_Width / 2, Screen_Height / 2 - 180);

        this->m_button_back->setSize({ 100,30 });
        this->m_button_back->setPosition({ Screen_Width / 2 - 350, Screen_Height / 2 + 180 });

        //   Chỉnh Font cho GUI
        //this->m_gui.setFont(this->m_data->m_assets.getFont(L"Font Pixel Việt Hóa"));

        //   GUI thêm các thành phần
        this->m_gui.add(this->m_button_back);
    }

    void InforAboutGameState::update()
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && this->m_button_back->isFocused())
        {
            this->m_button_back->setFocused(false);

            this->m_data->m_state.removeState();
        }
    }

    void InforAboutGameState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title);

        this->m_gui.draw();

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

        this->m_gui.handleEvent(event);
    }
}