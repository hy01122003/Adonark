//   Được lập trình bởi Harding Adonis
//   File InforAboutGameState.cpp
//   Ngày tạo: 11/06/2018

#include "InforAboutGameState.hpp"

namespace Adn
{
    InforAboutGameState::InforAboutGameState(GameDataRef data) :
        m_data(data),
        m_gui(this->m_data->m_window),
        m_button_back(tgui::Button::create(L"Trở về")),
        m_title(L"Thông Tin Game", this->m_data->m_assets.getFont(L"Font Goudytex"), 70),
        m_content_programer(L"Programer: Harding Adonis", this->m_data->m_assets.getFont(L"Font HLT GulyesaScript")),
        m_content_project_manager(L"Project Manager: Harding Adonis", this->m_data->m_assets.getFont(L"Font HLT GulyesaScript")),
        m_content_tester(L"Tester: Harding Adonis", this->m_data->m_assets.getFont(L"Font HLT GulyesaScript")),
        m_content_designer(L"Designer: Miner Phukibo", this->m_data->m_assets.getFont(L"Font HLT GulyesaScript"))
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void InforAboutGameState::setupButton()
    {
        this->m_button_back->setTextSize(20);
        this->m_button_back->setSize(100, 30);
        this->m_button_back->setPosition(50, 430);
        this->m_button_back->connect("pressed", [&]() {this->m_data->m_state.removeState(); });
        this->m_button_back->showWithEffect(tgui::ShowAnimationType::Fade, sf::milliseconds(800));

        this->m_gui.setFont(this->m_data->m_assets.getFont(L"Font Goudytex"));
        this->m_gui.add(this->m_button_back);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void InforAboutGameState::init()
    {
        this->m_title.setOrigin(this->m_title.getGlobalBounds().width / 2, this->m_title.getGlobalBounds().height / 2);
        this->m_title.setFillColor(sf::Color::Red);
        this->m_title.setPosition(Screen_Width / 2, Screen_Height / 2 - 210);
        

        this->m_content_programer.setStyle(sf::Text::Style::Bold);
        this->m_content_programer.setOrigin(this->m_content_programer.getGlobalBounds().width / 2, this->m_content_programer.getGlobalBounds().height / 2);
        this->m_content_programer.setFillColor(sf::Color::White);
        this->m_content_programer.setPosition(Screen_Width / 2, 150);

        this->m_content_project_manager.setStyle(sf::Text::Style::Bold);
        this->m_content_project_manager.setOrigin(this->m_content_project_manager.getGlobalBounds().width / 2, this->m_content_project_manager.getGlobalBounds().height / 2);
        this->m_content_project_manager.setFillColor(sf::Color::White);
        this->m_content_project_manager.setPosition(Screen_Width / 2, 220);


        this->m_content_tester.setStyle(sf::Text::Style::Bold);
        this->m_content_tester.setOrigin(this->m_content_tester.getGlobalBounds().width / 2, this->m_content_tester.getGlobalBounds().height / 2);
        this->m_content_tester.setFillColor(sf::Color::White);
        this->m_content_tester.setPosition(Screen_Width / 2, 290);


        this->m_content_designer.setStyle(sf::Text::Style::Bold);
        this->m_content_designer.setOrigin(this->m_content_designer.getGlobalBounds().width / 2, this->m_content_designer.getGlobalBounds().height / 2);
        this->m_content_designer.setFillColor(sf::Color::White);
        this->m_content_designer.setPosition(Screen_Width / 2, 360);

        this->setupButton();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void InforAboutGameState::update()
    {
        if (Ado::InputManager::checkTextContainMouse(this->m_data->m_window, this->m_content_programer))
            this->m_content_programer.setFillColor(sf::Color::Yellow);
        else this->m_content_programer.setFillColor(sf::Color::White);

        if (Ado::InputManager::checkTextContainMouse(this->m_data->m_window, this->m_content_project_manager))
            this->m_content_project_manager.setFillColor(sf::Color::Yellow);
        else this->m_content_project_manager.setFillColor(sf::Color::White);

        if (Ado::InputManager::checkTextContainMouse(this->m_data->m_window, this->m_content_tester))
            this->m_content_tester.setFillColor(sf::Color::Yellow);
        else this->m_content_tester.setFillColor(sf::Color::White);

        if (Ado::InputManager::checkTextContainMouse(this->m_data->m_window, this->m_content_designer))
            this->m_content_designer.setFillColor(sf::Color::Yellow);
        else this->m_content_designer.setFillColor(sf::Color::White);
        
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void InforAboutGameState::draw()
    {
        this->m_data->m_window.clear();

        this->m_data->m_window.draw(this->m_title);

        this->m_data->m_window.draw(this->m_content_programer);

        this->m_data->m_window.draw(this->m_content_project_manager);

        this->m_data->m_window.draw(this->m_content_tester);

        this->m_data->m_window.draw(this->m_content_designer);

        this->m_gui.draw();

        this->m_data->m_window.display();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void InforAboutGameState::handleEvent()
    {
        sf::Event event;

        while (this->m_data->m_window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                this->m_data->m_window.close();

            this->m_gui.handleEvent(event);
        }

    }
}