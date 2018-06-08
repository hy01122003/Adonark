//   Được lập trình bởi Harding Adonis
//   File Application.cpp
//   Ngày tạo: 08/06/2018

#ifndef _AdnConfig_HPP_
#define _AdnConfig_HPP_

#include <fcntl.h>
#include <io.h>
#include <string>
#include <locale>
#include <codecvt>
#include <fstream>

/*
**   Cài đặt để đọc và ghi file có
**   nội dung Tiếng Việt
*/
void SetUp_IO_File_UF8()
{
    _setmode(_fileno(stdout), _O_WTEXT);
    _setmode(_fileno(stdin), _O_WTEXT);
    
    //   Dành cho đọc ghi file Tiếng Việt
    //std::locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);
}

#endif  //_AdnConfig_HPP_