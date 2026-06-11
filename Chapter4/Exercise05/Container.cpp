#include "Container.h"

#include <iostream>

Container::Container(int32_t s32_size)
{
    ms32_size = s32_size;
    mps32_p = new int32_t[ms32_size];
}

Container::~Container()
{
    delete[] mps32_p;
}

void Container::read()
{
    std::cout << "정수 " << ms32_size << "개 입력>>";

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        std::cin >> mps32_p[s32_i];
    }
}

void Container::write()
{
    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        std::cout << mps32_p[s32_i] << " ";
    }
    std::cout << std::endl;
}

void Container::rotate()
{
    int32_t s32_last = mps32_p[ms32_size - 1];
    
    for (int32_t s32_i = ms32_size - 1; s32_i > 0; s32_i--)
    {
        mps32_p[s32_i] = mps32_p[s32_i - 1];
        
    }
    mps32_p[0] = s32_last;
}

double Container::avg()
{
    double d64_ret = 0.0;

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        d64_ret += (double)mps32_p[s32_i];
    }

    d64_ret /= (double)ms32_size;

    return d64_ret;
}