#include "Picture.h"

Picture::Picture()
{
    ms32_width = 5;
    ms32_height = 7;
    mo_place = "¸ð¸§";
}

Picture::Picture(int32_t s32_width, int32_t s32_height, std::string o_place)
{
    ms32_width = s32_width;
    ms32_height = s32_height;
    mo_place = o_place;
}

int32_t Picture::getWidth()
{
    return ms32_width;
}

int32_t Picture::getHeight()
{
    return ms32_height;
}

std::string Picture::getPlace()
{
    return mo_place;
}