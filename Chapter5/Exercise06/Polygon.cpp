#include "Polygon.h"

#include <iostream>

Polygon::Polygon(int32_t s32_size)
{
    ms32_size = s32_size;

    mps32_xList = new int32_t[ms32_size];
    mps32_yList = new int32_t[ms32_size];
}

Polygon::~Polygon()
{
    delete[] mps32_xList;
    delete[] mps32_yList;
}

void Polygon::read()
{
    std::cout << "아래에 x, y 값으로 " << ms32_size << "개의 점을 입력하세요." << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        std::cin >> mps32_xList[s32_i] >> mps32_yList[s32_i];
    }
}

bool Polygon::get(int32_t s32_n, int32_t& rs32_x, int32_t& rs32_y)
{
    bool b1_ret = false;

    do
    {
        if ((s32_n < 1) || (s32_n > ms32_size))
        {
            break;
        }

        rs32_x = mps32_xList[s32_n - 1];
        rs32_y = mps32_yList[s32_n - 1];
        
        b1_ret = true;

    } while (0);

    return b1_ret;
}