#ifndef COLORPOINT_H
#define COLORPOINT_H

#include "Point.h"

#include <string>

class ColorPoint : public Point
{
public:
    ColorPoint(int32_t s32_x, int32_t s32_y, std::string o_color);

    void setPoint(int32_t s32_x, int32_t s32_y);
    void setColor(std::string o_color);

    void show();

private:
    std::string mo_color;
};

#endif /* COLORPOINT_H */