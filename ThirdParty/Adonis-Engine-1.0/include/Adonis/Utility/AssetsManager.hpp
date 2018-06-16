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
        std::map<std::string, sf::Texture>         m_texture;
        std::map<std::string, sf::Font>            m_font;
        std::map<std::string, sf::Image>           m_image;

    public:

        //   Load dữ liệu
        void loadFileTexture(std::string ID, std::string PathFile);
        void loadFileFont(std::string ID, std::string PathFile);
        void loadFileImage(std::string ID, std::string PathFile);

        //   Lấy dữ liệu
        sf::Texture& getTexture(std::string ID);
        sf::Font& getFont(std::string ID);
        sf::Image& getImage(std::string ID);


        void clearAllTexture();
        void clearAllFont();
        void clearAllImage();

        void clearTexture(std::string ID);
        void clearFont(std::string ID);
        void clearImage(std::string ID);
    };
}

#endif //   _AssetsManager_Adonis_HPP_