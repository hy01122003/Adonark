//   Adonis Engine
//   Được lập trình bởi Harding Adonis

#include <Adonis/Utility/AssetsManager.hpp>

namespace Ado
{
    void AssetsManager::loadFileTexture(std::wstring ID, std::string PathFile)
    {
        sf::Texture texture;

        if (!texture.loadFromFile(PathFile))
            exit(EXIT_FAILURE);

        this->m_texture[ID] = texture;
    }

    void AssetsManager::loadFileFont(std::wstring ID, std::string PathFile)
    {
        sf::Font font;

        if (!font.loadFromFile(PathFile))
            exit(EXIT_FAILURE);

        this->m_font[ID] = font;
    }

    void AssetsManager::loadFileImage(std::wstring ID, std::string PathFile)
    {
        sf::Image image;

        if (!image.loadFromFile(PathFile))
            exit(EXIT_FAILURE);

        this->m_image[ID] = image;
    }

    sf::Texture& AssetsManager::getTexture(std::wstring ID)
    {
        return this->m_texture.at(ID);
    }

    sf::Font& AssetsManager::getFont(std::wstring ID)
    {
        return this->m_font.at(ID);
    }

    sf::Image& AssetsManager::getImage(std::wstring ID)
    {
        return this->m_image.at(ID);
    }
}