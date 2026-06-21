#include "MyStack.h"

#include <cstring>

MyStack::MyStack()
{
    std::memset(mas32_p, 0, sizeof(mas32_p));
    ms32_tos = 0;
}

bool MyStack::push(int32_t s32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_tos >= MAX_NUMBER)
        {
            break;
        }

        mas32_p[ms32_tos++] = s32_n;

        b1_ret = true;

    } while (0);

    return b1_ret;
}

bool MyStack::pop(int32_t& rs32_n)
{
    bool b1_ret = false;

    do
    {
        if (ms32_tos <= 0)
        {
            break;
        }

        rs32_n = mas32_p[--ms32_tos];

        b1_ret = true;

    } while (0);

    return b1_ret;
      
}