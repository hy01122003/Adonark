/*
**   Được lập trình bởi Harding Adonis
**   File CrovaniaVillage.hpp
**   Ngày tạo: 16/06/2018
*/

#ifndef _AdonarkVillage_HPP_
#define _AdonarkVillage_HPP_

#include <Adonis/Utility/AssetsManager.hpp>
#include <SFML/Graphics.hpp>
#include "GamePlay.hpp"
#include "../PathData.hpp"

namespace Adn
{
    class CrovaniaVillage : public GamePlay
    {
    private:
        Ado::AssetsManager            m_assets;

        sf::View                      m_view;

    private:
        void loadData();

    public:
        CrovaniaVillage(sf::RenderTarget* target, Ado::AssetsManager& assets);

        void update();

        void draw();
    };
}

#endif  //   _AdonarkVillage_HPP_