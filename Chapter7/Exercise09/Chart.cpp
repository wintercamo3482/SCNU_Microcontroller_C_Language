#include "Chart.h"

#include <cstring>
#include <iostream>

Chart::Chart(int32_t s32_size)
{
    ms32_size = s32_size;
    ms32_count = 0;

    mps32_data = new int32_t[ms32_size];
    std::memset(mps32_data, 0, sizeof(int32_t) * ms32_size);
}

Chart::~Chart()
{
    delete[] mps32_data;
}

void Chart::show()
{
    std::cout << "차트 데이터: ";

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        std::cout << mps32_data[s32_i] << ' ';
    }

    std::cout << std::endl;
}

bool Chart::operator!()
{
    bool b1_ret = false;

    do
    {
        if (ms32_count == 0)
        {
            break;
        }
        
        b1_ret = true;

    } while (0);

    return b1_ret;
}

Chart& Chart::operator<<(int32_t s32_n)
{
    if (ms32_count < ms32_size)
    {
        mps32_data[ms32_count] = s32_n;
        ms32_count++;
    }

    return *this;
}

int32_t Chart::operator~()
{
    int32_t s32_ret = 0;

    do
    {
        if (ms32_count == 0)
        {
            break;
        }

        for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
        {
            s32_ret += mps32_data[s32_i];
        }

        s32_ret /= ms32_count;

    } while (0);

    return s32_ret;
}