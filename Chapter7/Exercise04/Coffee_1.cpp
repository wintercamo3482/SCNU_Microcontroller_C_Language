#include "Coffee_1.h"

#include <iostream>

Coffee::Coffee(int32_t s32_water, int32_t s32_espresso, int32_t s32_sugar, int32_t s32_cream)
{
    ms32_water = s32_water;
    ms32_espresso = s32_espresso;
    ms32_sugar = s32_sugar;
    ms32_cream = s32_cream;
}

void Coffee::show()
{
    std::cout << "물 " << ms32_water << ", 커피 " << ms32_espresso;
    std::cout << ", 설탕 " << ms32_sugar << ", 크림 " << ms32_cream << std::endl;
}

Coffee& Coffee::operator<<(const Coffee& ro_other)
{
    ms32_water += ro_other.ms32_water;
    ms32_espresso += ro_other.ms32_espresso;
    ms32_sugar += ro_other.ms32_sugar;
    ms32_cream += ro_other.ms32_cream;

    return *this;
}

Coffee& Coffee::operator<<(int32_t s32_water)
{
    ms32_water += s32_water;
    return *this;
}