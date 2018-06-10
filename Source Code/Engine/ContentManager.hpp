//   Được lập trình bởi Harding Adonis
//   File ContentManager.hpp
//   Ngày tạo: 09/06/2018

#ifndef _ContentManager_HPP_
#define _ContentManager_HPP_

#include <SFML/Graphics.hpp>
#include <string>
#include <map>

namespace Adn
{
    /*
    **   Class này có tác dụng quản lí các lời nói của NPC
    */
    class ContentManager
    {
    private:

        /*
        **   std::wstring thứ nhất là tên của NPC
        **   std::wstring thứ ba là ID lời nói của NPC
        **   std::wstring thứ ba là lời nói của NPC
        */
        std::map<std::wstring, std::map<std::wstring, std::wstring>>    m_content;

    public:

        /*
        **   Thêm lời nói cho NPC
        */
        void addContent(std::wstring nameNPC, std::wstring ID_Content, std::wstring speech);

        /*
        **   Lấy lời nói của NPC
        */
        std::wstring getContent(std::wstring nameNPC, std::wstring ID_Content);

    };
}

#endif  //   _ContentManager_HPP_