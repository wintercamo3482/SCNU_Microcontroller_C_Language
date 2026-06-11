#include "Pipe.h"

#include <iostream>

Pipe::Pipe()
{
    for (int32_t s32_i = 0; s32_i < 10; s32_i++)
    {
        mas32_data[s32_i] = 0;
    }

    ms32_index = 0;
}

int32_t Pipe::arrive(int32_t s32_n)
{
    int32_t s32_ret = -1;

    do
    {
        if (s32_n < 10)
        {
            mas32_data[ms32_index] = s32_n;
            ms32_index++;
            
            break;
        }

        s32_ret = shift();
        mas32_data[9] = s32_n;
        ms32_index = 10;

    } while (0);

    return s32_ret;
}

int32_t Pipe::shift()
{
    int32_t s32_ret = mas32_data[0];

    for (int32_t s32_i = 0; s32_i < 9; s32_i++)
    {
        mas32_data[s32_i] = mas32_data[s32_i + 1];
    }

    mas32_data[9] = 0;

    if (ms32_index > 0)
    {
        ms32_index--;
    }

    return s32_ret;
}
void Pipe::show()
{
    for (int32_t s32_i = 0; s32_i < 10; s32_i++)
    {
        std::cout << mas32_data[s32_i] << " ";
    }
    std::cout << std::endl;
}