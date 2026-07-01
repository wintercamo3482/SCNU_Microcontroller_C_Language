#include "GoldMember.h"

GoldMember::GoldMember(std::string o_name)
: Member(o_name, 3)
{}

void GoldMember::earn(int32_t s32_pay)
{
    if (s32_pay >= 2000)
    {
        ms32_point += s32_pay * 5 / 1000;
    }
    else if (s32_pay >= 1000)
    {
        ms32_point += s32_pay * 4 / 1000;
    }
    else
    {
        ms32_point += s32_pay * 3 / 1000;
    }
}