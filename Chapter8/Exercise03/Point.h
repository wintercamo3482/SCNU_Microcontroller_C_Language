#ifndef POINT_H
#define POINT_H

#include <stdint.h>

class Point
{
public:
    Point(int32_t s32_x, int32_t s32_y);

    int32_t getX();
    int32_t getY();

protected:
    void move(int32_t s32_x, int32_t s32_y);

private:
    int32_t ms32_x;
    int32_t ms32_y;
};

#endif /*POINT_H*/