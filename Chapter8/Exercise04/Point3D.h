#ifndef Point3D_H
#define Point3D_H

#include "Point.h"

class Point3D : public Point
{
public:
    Point3D(int32_t s32_x, int32_t s32_y, int32_t s32_z);

    void up();
    void left();
    void upZ();
    void set(int32_t s32_x, int32_t s32_y, int32_t s32_z);
    void show();

private:
    int32_t ms32_z;
};

#endif /* Point3D_H */