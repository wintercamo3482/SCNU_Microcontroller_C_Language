#include "CompactDisc.h"

#include <iostream>

CompactDisc::CompactDisc(int32_t s32_id, int32_t s32_price, std::string o_producer, std::string o_description, std::string o_album_title, std::string o_singer)
: Product(s32_id, s32_price, o_producer, o_description)
{
    mo_album_title = o_album_title;
    mo_singer = o_singer;
}

void CompactDisc::ShowCD()
{
    ShowProduct();
    std::cout << "앨범제목 : " << mo_album_title << std::endl;
    std::cout << "가수 : " << mo_singer << std::endl;
}