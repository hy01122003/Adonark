/*
**   Được lập trình bởi Harding Adonis
**   File SoundsManager.hpp
**   Ngày tạo: 15/06/2018
*/

#ifndef _SoundsManager_HPP_
#define _SoundsManager_HPP_

#include <SFML/Audio.hpp>
#include <string>
#include <map>
#include <stdlib.h>
#include <fstream>

namespace Adn
{
    /*
    **   Class này có tác dụng quản lí các file âm thanh trong game
    */
    class SoundsManager
    {
    private:
        std::map<std::wstring, sf::SoundBuffer>    m_soundbuffer;
        std::map<std::wstring, sf::Sound>          m_sounds;
        std::map<std::wstring, sf::Music>          m_music;

        
        unsigned int                               m_volume_sounds;
        unsigned int                               m_volume_music;

    public:
        SoundsManager& operator = (const SoundsManager& soundsmanager) = delete;
        SoundsManager(const SoundsManager& soundsnanager) = delete;
        SoundsManager();

        /*
        **   Hàm này có tác dụng lưu dữ liệu độ lớn của âm thanh
        */
        void saveData();


        /*
        **   Hàm này có tác dụng đặt lại độ lớn của âm thanh
        */
        void setVolume(unsigned int volume_sounds, unsigned int volume_music);

        /*
        **   Các hàm trả về độ lớn của âm thanh
        */
        unsigned int getVolumeSounds();
        unsigned int getVolumeMusic();

    };
}


#endif  //   _SoundsManager_HPP_