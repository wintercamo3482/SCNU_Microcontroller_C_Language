#include "Fitness.h"

Fitness::Fitness()
{
    ms32_men = 0;
    ms32_women = 0;
}

Fitness& Fitness::arrive(std::string o_gender, int32_t s32_count)
{
    if (o_gender == "남")
    {
        ms32_men += s32_count;
    }
    else if (o_gender == "여")
    {
        ms32_women += s32_count;
    }

    return *this;
}

void Fitness::count(std::string o_gender, int32_t& rs32_count)
{
    if (o_gender == "남")
    {
        rs32_count = ms32_men;
    }
    else if (o_gender == "여")
    {
        rs32_count = ms32_women;
    }
}

int32_t& Fitness::at(std::string o_gender)
{
    static int32_t ss32_dummy = 0;

    if (o_gender == "남")
    {
        return ms32_men;
    }
    else if (o_gender == "여")
    {
        return ms32_women;
    }
    return ss32_dummy;
}