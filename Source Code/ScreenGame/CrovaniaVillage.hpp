/*
**   Được lập trình bởi Harding Adonis
**   File CrovaniaVillage.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _CrovaniaVillage_HPP_
#define _CrovaniaVillage_HPP_

#include <Adonis/Utility/AssetsManager.hpp>
#include <SFML/Graphics.hpp>
#include "GamePlay/GamePlayDataRef.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class CrovaniaVillage : public GamePlay
    {
    private:
        GamePlayDataRef            m_data;

        sf::View                   m_view;

    private:
        void loadData();

    public:
        CrovaniaVillage(GamePlayDataRef data);

        void init();

        void update();

        void draw();
    };
}

#endif  //   _CrovaniaVillage_HPP_