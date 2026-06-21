#ifndef BUBBLE_H
#define BUBBLE_H

#include <stdint.h>

class Bubble
{
    int32_t ms32_radius;

public:
    Bubble(int32_t s32_radius) { this->ms32_radius = s32_radius; }
    int32_t getRadius() { return ms32_radius; }
    void setRadius(int32_t s32_n) { ms32_radius = s32_n; }
};

#endif /* BUBBLE_H */