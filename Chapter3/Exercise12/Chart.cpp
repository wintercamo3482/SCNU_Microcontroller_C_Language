#include "Chart.h"

#include <iostream>

Chart::Chart(std::string o_title)
{
    mo_title = o_title;

    mo_color[0] = "빨강";
    mo_color[1] = "파랑";
    mo_color[2] = "노랑";

    for (int32_t s32_i = 0; s32_i < COLOR_NUM; s32_i++)
    {
        mas32_data[s32_i] = 0;
    }
}

Chart::~Chart()
{
    std::cout << "차트 데이터는 저장되지 않고 사라집니다." << std::endl;
}

int32_t Chart::getNumberOfColors()
{
    return COLOR_NUM;
}

std::string Chart::getColor(int32_t s32_index)
{
    return mo_color[s32_index];
}

void Chart::add(int32_t s32_index, int32_t s32_count)
{
    mas32_data[s32_index] = s32_count;
}

void Chart::draw()
{
    int32_t s32_total = 0;
    double d64_percent = 0.0;

    for (int32_t s32_i = 0; s32_i < COLOR_NUM; s32_i++)
    {
        s32_total += mas32_data[s32_i];
    }

    std::cout << mo_title << "******************" << std::endl;
    
    for (int32_t s32_i = 0; s32_i < COLOR_NUM; s32_i++)
    {
        d64_percent = 0.0;

        if (s32_total != 0)
        {
            d64_percent = (double)mas32_data[s32_i] / s32_total * 100.0;
        }

        std::cout << mo_color[s32_i] << ": " << d64_percent << "%" << std::endl;
    }

    std::cout << "*************************************" << std::endl;
}