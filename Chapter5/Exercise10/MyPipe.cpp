#include "MyPipe.h"

#include <cstring>

MyPipe::MyPipe()
{
    ms32_putIndex = 0;
    std::memset(mas32_p, 0, sizeof(mas32_p));
}

bool MyPipe::put(int32_t s32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_putIndex >= MAX_NUMBER)
        {
            break;
        }

        mas32_p[ms32_putIndex++] = s32_n;

        b1_ret = true;

    } while (0);

    return b1_ret;
}

bool MyPipe::get(int32_t& rs32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_putIndex <= 0)
        {
            break;
        }

        rs32_n = mas32_p[0];

        for (int32_t s32_i = 0; s32_i < ms32_putIndex - 1; s32_i++)
        {
            mas32_p[s32_i] = mas32_p[s32_i + 1];
        }
        mas32_p[--ms32_putIndex] = 0;

        b1_ret = true;

    } while (0);

    return b1_ret;
}
int32_t MyPipe::getSize()
{
    return ms32_putIndex;
}