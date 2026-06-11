#include "Storage.h"

#include <iostream>

Storage::Storage()
{
    ms32_next = 0;
}

void Storage::put(double d64_temperature)
{
    if (ms32_next < 10)
    {
        mad64_data[ms32_next] = d64_temperature;
        ms32_next++;
    }
}

void Storage::dump()
{
    for (int32_t s32_i = 0; s32_i < ms32_next; s32_i++)
    {
        std::cout << mad64_data[s32_i] << " ";
    }
    std::cout << std::endl;
}
double Storage::getAvg()
{
    double d64_ret = 0.0;

    do
    {
        if (ms32_next == 0)
        {
            break;
        }
        
        for (int32_t s32_i = 0; s32_i < ms32_next; s32_i++)
        {
            d64_ret += mad64_data[s32_i];
        }

        d64_ret /= (double)ms32_next;

    } while (0);

    return d64_ret;
}