#include "Point3D.h"

#include <iostream>

Point3D::Point3D(int32_t s32_x, int32_t s32_y, int32_t s32_z)
: Point(s32_x, s32_y)
{
    ms32_z = s32_z;
}

void Point3D::up()
{
    move(getX(), getY() + 1);
}

void Point3D::left()
{
    move(getX() - 1, getY());
}

void Point3D::upZ()
{
    ms32_z++;
}

void Point3D::set(int32_t s32_x, int32_t s32_y, int32_t s32_z)
{
    move(s32_x, s32_y);
    ms32_z = s32_z;
}

void Point3D::show()
{
    std::cout << "(" << getX() << "," << getY() << "," << ms32_z << ")" << std::endl;
}