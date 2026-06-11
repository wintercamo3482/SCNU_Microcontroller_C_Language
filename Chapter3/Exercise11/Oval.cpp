#include "Oval.h"

#include <iostream>

#define PI  3.14

Oval::Oval()
{
    ms32_width = 1;
    ms32_height = 1;
}

Oval::Oval(int32_t s32_width, int32_t s32_height)
{
    ms32_width = s32_width;
    ms32_height = s32_height;
}

Oval::~Oval()
{
    std::cout << "Oval ¼Ò¸ê:" << ms32_width << "x" << ms32_height << std::endl;
}

void Oval::set(int32_t s32_width, int32_t s32_height)
{
    ms32_width = s32_width;
    ms32_height = s32_height;
}

void Oval::show()
{
    std::cout << "Oval: width=" << ms32_width << ", height=" << ms32_height << std::endl;
}

double Oval::area()
{
    return PI * ms32_width * ms32_height / 4.0;
}