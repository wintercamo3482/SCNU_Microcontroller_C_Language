#include "Stack.h"

#include <cstring>

Stack::Stack()
{
	std::memset(mas32_data, 0, sizeof(int32_t) * MAX_SIZE);
	ms32_tos = 0;
}

Stack& Stack::operator<<(int32_t s32_n)
{
	if (ms32_tos < MAX_SIZE)
	{
		mas32_data[ms32_tos++] = s32_n;
	}
	return *this;
}

Stack& Stack::operator>>(int32_t& rs32_n)
{
	if (ms32_tos > 0)
	{
		rs32_n = mas32_data[--ms32_tos];
	}
    return *this;
}

bool Stack::operator!()
{
    bool b1_ret = false;
    
    do
    {
        if (ms32_tos != 0)
        {
            break;
        }

        b1_ret = true;

    } while (0);
    
    return b1_ret;
} 