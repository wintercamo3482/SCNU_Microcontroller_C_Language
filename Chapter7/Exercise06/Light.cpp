#include "Light.h"

#include <iostream>

Light::Light(int32_t s32_size)
{
    ms32_size = s32_size;
}

Light& Light::operator+=(Light& ro_other)
{
    ms32_size += ro_other.ms32_size;
    ro_other.ms32_size = 0;
    
    return *this;
}

Light& Light::operator+=(int32_t s32_size)
{
    ms32_size += s32_size;
    return *this;
}

Light Light::operator--(int32_t)
{
    Light o_ret(ms32_size);

    if (ms32_size > 0)
    {
        ms32_size--;
    }

    return o_ret;
}

bool Light::operator==(int32_t s32_size)
{
    bool b1_ret = (ms32_size == s32_size);

    return b1_ret;
}

void Light::operator~()
{
    std::cout << "빛 크기 " << ms32_size << std::endl;
}