#include "MyPipe.h"

#include <cstring>

#define DEFAULT_SIZE    10

MyPipe::MyPipe()
{
    ms32_size = DEFAULT_SIZE;
    ms32_putIndex = 0;

    ps32_p = new int32_t[ms32_size];
    std::memset(ps32_p, 0, sizeof(int32_t) * ms32_size);
}

MyPipe::MyPipe(int32_t s32_size)
{
    ms32_size = s32_size;
    ms32_putIndex = 0;

    ps32_p = new int32_t[ms32_size];
    std::memset(ps32_p, 0, sizeof(int32_t) * ms32_size);
}

MyPipe::MyPipe(const MyPipe& ro_src)
{
    ms32_size = ro_src.ms32_size;
    ms32_putIndex = ro_src.ms32_putIndex;
    
    ps32_p = new int32_t[ms32_size];
    std::memcpy(ps32_p, ro_src.ps32_p, sizeof(int32_t) * ms32_size);
}

MyPipe::~MyPipe()
{
    delete[] ps32_p;
}

bool MyPipe::put(int32_t s32_n)
{
    bool b1_ret = false;
    
    do
    {
        if (ms32_putIndex >= ms32_size)
        {
            break;
        }
        
        ps32_p[ms32_putIndex++] = s32_n;

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

        rs32_n = ps32_p[0];

        for (int32_t s32_i = 0; s32_i < ms32_putIndex - 1; s32_i++)
        {
            ps32_p[s32_i] = ps32_p[s32_i + 1];
        }

        ms32_putIndex--;
        ps32_p[ms32_putIndex] = 0;

        b1_ret = true;

    } while (0);

    return b1_ret;
}