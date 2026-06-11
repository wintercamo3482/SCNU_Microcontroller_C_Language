#include "Coffee.h"

#include <iostream>

Coffee::Coffee()
{
    ms32_coffee = 10;
    ms32_sugar = 0;
    ms32_milk = 0;
    ms32_water = 0;
}

Coffee::Coffee(int32_t s32_coffee, int32_t s32_sugar, int32_t s32_milk, int32_t s32_water)
{
    ms32_coffee = s32_coffee;
    ms32_sugar = s32_sugar;
    ms32_milk = s32_milk;
    ms32_water = s32_water;
}

void Coffee::show()
{
    std::cout << "coffee ";
    for (int32_t s32_i = 0; s32_i < ms32_coffee; s32_i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "sugar ";
    for (int32_t s32_i = 0; s32_i < ms32_sugar; s32_i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "milk ";
    for (int32_t s32_i = 0; s32_i < ms32_milk; s32_i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "water ";
    for (int32_t s32_i = 0; s32_i < ms32_water; s32_i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}