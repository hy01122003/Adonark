//   Được lập trình bởi Harding Adonis
//   File ContentManager.cpp
//   Ngày tạo: 09/06/2018

#include "ContentManager.hpp"

namespace Adn
{
    void ContentManager::addContent(std::wstring nameNPC, std::wstring ID_Content, std::wstring speech)
    {
        this->m_content[nameNPC][ID_Content] = speech;
    }

    std::wstring ContentManager::getContent(std::wstring nameNPC, std::wstring ID_Content)
    {
        return this->m_content[nameNPC].at(ID_Content);
    }
}