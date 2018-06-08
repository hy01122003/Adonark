//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#ifndef _AssetsManager_Adonis_HPP_
#define _AssetsManager_Adonis_HPP_

#include <SFML/Graphics.hpp>
#include <string>
#include <map>
#include <stdio.h>

namespace Ado
{
    class AssetsManager
    {
    protected:
        std::map<std::wstring, sf::Texture>         m_texture;
        std::map<std::wstring, sf::Font>            m_font;
        std::map<std::wstring, sf::Image>           m_image;

    public:

        //   Load dữ liệu
        void loadFileTexture(std::wstring ID, std::string PathFile);
        void loadFileFont(std::wstring ID, std::string PathFile);
        void loadFileImage(std::wstring ID, std::string PathFile);

        //   Lấy dữ liệu
        sf::Texture& getTexture(std::wstring ID);
        sf::Font& getFont(std::wstring ID);
        sf::Image& getImage(std::wstring ID);

    };
}

#endif //   _AssetsManager_Adonis_HPP_