#ifndef Circle_H
#define Circle_H

#include <stdint.h>

class Circle
{
public:
    Circle(int32_t s32_radius = 0);
    
    int32_t getRadius();
    void setRadius(int32_t s32_radius);
    double getArea();

private:
    int32_t ms32_radius;
};

#endif /* Circle_H */