#include "ColorPoint.h"

#include <iostream>

ColorPoint::ColorPoint(int32_t s32_x, int32_t s32_y, std::string o_color)
: Point(s32_x, s32_y)
{
    mo_color = o_color;
}

void ColorPoint::setPoint(int32_t s32_x, int32_t s32_y)
{
    move(s32_x, s32_y);
}

void ColorPoint::setColor(std::string o_color)
{
    mo_color = o_color;
}

void ColorPoint::show()
{
    std::cout << mo_color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << std::endl;
}