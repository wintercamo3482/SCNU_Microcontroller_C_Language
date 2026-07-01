#include "Point.h"

Point::Point(int32_t s32_x, int32_t s32_y)
{
    ms32_x = s32_x;
    ms32_y = s32_y;
}

int32_t Point::getX()
{
    return ms32_x;
}

int32_t Point::getY()
{
    return ms32_y;
}

void Point::move(int32_t s32_x, int32_t s32_y)
{
    ms32_x = s32_x;
    ms32_y = s32_y;
}