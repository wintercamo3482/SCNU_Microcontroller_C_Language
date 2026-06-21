#include "Vector_2.h"

#include <cstring>
#include <iostream>

Vector::Vector(int32_t s32_size, int32_t s32_value)
{
    ms32_size = s32_size;
    mps32_mem = new int32_t[ms32_size];

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        mps32_mem[s32_i] = s32_value;
    }
}

Vector::~Vector()
{
    delete[] mps32_mem;
}

void Vector::show(int32_t s32_count)
{
    if (s32_count < 0 || s32_count > ms32_size)
    {
        s32_count = ms32_size;
    }

    for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
    {
        std::cout << mps32_mem[s32_i] << ' ';
    }
    std::cout << std::endl;
}