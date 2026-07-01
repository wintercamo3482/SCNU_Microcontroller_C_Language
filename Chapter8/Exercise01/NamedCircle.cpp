#include "NamedCircle.h"

#include <iostream>

NamedCircle::NamedCircle(int32_t s32_radius, std::string o_name)
: Circle(s32_radius)
{
    mo_name = o_name;
}

void NamedCircle::show()
{
    std::cout << "반지름이 " << getRadius() << "인 " << mo_name << std::endl;
}