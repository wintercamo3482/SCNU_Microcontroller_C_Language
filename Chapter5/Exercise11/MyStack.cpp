#include "MyStack.h"

#include <cstring>

#define DEFAULT_SIZE    10

MyStack::MyStack()
{
    ms32_size = DEFAULT_SIZE;
    ms32_tos = 0;

    mps32_p = new int32_t[ms32_size];
    std::memset(mps32_p, 0, sizeof(int32_t) * ms32_size);
}

MyStack::MyStack(int32_t s32_size)
{
    ms32_size = s32_size;
    ms32_tos = 0;

    mps32_p = new int32_t[ms32_size];
    std::memset(mps32_p, 0, sizeof(int32_t) * ms32_size);
}

MyStack::MyStack(const MyStack& ro_src)
{
    ms32_size = ro_src.ms32_size;
    ms32_tos = ro_src.ms32_tos;

    mps32_p = new int32_t[ms32_size];
    std::memcpy(mps32_p, ro_src.mps32_p, sizeof(int32_t) * ms32_size);
}

MyStack::~MyStack()
{
    delete[] mps32_p;
}

bool MyStack::push(int32_t s32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_tos >= ms32_size)
        {
            break;
        }

        mps32_p[ms32_tos++] = s32_n;

        b1_ret = true;

    } while (0);

    return b1_ret;
}

bool MyStack::pop(int32_t& rs32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_size <= 0)
        {
            break;
        }

        rs32_n = mps32_p[--ms32_tos];

        b1_ret = true;

    } while (0);

    return b1_ret;
}