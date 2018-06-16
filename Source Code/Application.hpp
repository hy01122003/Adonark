//   Được lập trình bởi Harding Adonis
//   File Application.hpp
//   Ngày tạo: 05/06/2018

#ifndef _Application_HPP_
#define _Application_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>
#include "ScreenState/GameDataRef.hpp"
#include "ScreenState/SplashState.hpp"
#include "PathData.hpp"

namespace Adn
{
    class Application
    {
    private:
        GameDataRef        m_data;

        sf::Cursor         m_mouse;

        const sf::Time     m_time_a_frame;

    public:
        Application();

        Application& operator = (Application& app) = delete;
        Application(Application& app) = delete;

        void run();

    };
}

#endif  //   _Application_HPP_