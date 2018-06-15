/*
**   Được lập trình bởi Harding Adonis
**   File SoundsManager.cpp
**   Ngày tạo: 15/06/2018
*/

#include "SoundsManager.hpp"

namespace Adn
{
    SoundsManager::SoundsManager()
    {
        std::ifstream readFile("Assets/Data.dat", std::ios_base::in);

        if (readFile)
        {
            readFile >> this->m_volume_sounds >> this->m_volume_music;

            readFile.close();
        }
        else exit(EXIT_FAILURE);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SoundsManager::saveData()
    {
        std::ofstream writeFile("Assets/Data.dat", std::ios_base::out);

        writeFile << this->m_volume_sounds << "\n" << this->m_volume_music;

        writeFile.close();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void SoundsManager::setVolume(unsigned int volume_sounds, unsigned int volume_music)
    {
        this->m_volume_sounds = volume_sounds;

        this->m_volume_music = volume_music;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    unsigned int SoundsManager::getVolumeSounds()
    {
        return this->m_volume_sounds;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    unsigned int SoundsManager::getVolumeMusic()
    {
        return this->m_volume_music;
    }
}