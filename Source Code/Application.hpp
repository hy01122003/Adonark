﻿//   Được lập trình bởi Harding Adonis
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

        sf::Time           m_time_a_frame;

        sf::Clock          m_timer;
        int                m_all_frame;
    public:
        Application();

        void run();

    };
}

#endif  //   _Application_HPP_