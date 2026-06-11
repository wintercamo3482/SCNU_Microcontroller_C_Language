#ifndef CUBE_H
#define CUBE_H

#include <stdint.h>

class Cube
{
private:
    int32_t ms32_width;
    int32_t ms32_height;
    int32_t ms32_depth;

public:
    Cube(int32_t s32_width, int32_t s32_height, int32_t s32_depth);

    void increase(int32_t s32_width, int32_t s32_height, int32_t s32_depth);

    bool isZero();
    int32_t getVolume();
};

#endif /* CUBE_H */