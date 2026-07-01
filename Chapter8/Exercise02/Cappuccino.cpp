#include "Cappuccino.h"

#include <iostream>

Cappuccino::Cappuccino(std::string o_name, int32_t s32_espresso, int32_t s32_water, int32_t s32_milk, bool b1_ice)
    : EspressoCoffee(o_name, s32_espresso, s32_water)
{
    ms32_milk = s32_milk;
    mb1_ice = b1_ice;
}

void Cappuccino::recipe()
{
    std::string o_name;
    
    int32_t s32_espresso = 0;
    int32_t s32_water = 0;
    
    get(o_name, s32_espresso, s32_water);

    std::cout << o_name << "는 에스프레스 " << s32_espresso << "스푼, ";

    if (mb1_ice == true)
    {
        std::cout << "얼음물 " << s32_water << "스푼, ";
    }
    else
    {
        std::cout << "따뜻한 물 " << s32_water << "스푼, ";
    }

    std::cout << "우유 " << ms32_milk << "스푼, ";
    
    if (mb1_ice == true)
    {
        std::cout << "얼음 충분히";
    }

    std::cout << std::endl;
}