#include "EspressoCoffee.h"

#include <iostream>

EspressoCoffee::EspressoCoffee(std::string o_name, int32_t s32_espresso, int32_t s32_water)
{
    this->mo_name = o_name;
    this->ms32_espresso = s32_espresso;
    this->ms32_water = s32_water;
}

void EspressoCoffee::recipe()
{
    std::cout << mo_name << "는 에스프레스 " << ms32_espresso << "스푼";
    std::cout << ", 물 " << ms32_water << "스푼" << std::endl;
}

void EspressoCoffee::get(std::string& ro_name, int32_t& rs32_espresso, int32_t& rs32_water)
{
    ro_name = this->mo_name;
    rs32_espresso = this->ms32_espresso;
    rs32_water = this->ms32_water;
}