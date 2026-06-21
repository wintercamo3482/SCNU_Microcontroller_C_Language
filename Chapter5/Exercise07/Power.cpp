#include "Power.h"

#include <iostream>

Power::Power(int32_t s32_kick, int32_t s32_punch)
{
    ms32_kick = s32_kick;
    ms32_punch = s32_punch;
}

Power& Power::add(Power o_p)
{
    ms32_kick += o_p.ms32_kick;
    ms32_punch += o_p.ms32_punch;

    return *this;
}

void Power::show()
{
    std::cout << "kick=" << ms32_kick << ", punch=" << ms32_punch << std::endl;
}