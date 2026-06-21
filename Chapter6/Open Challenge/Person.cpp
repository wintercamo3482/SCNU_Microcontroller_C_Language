#include "Person.h"

#include <iostream>

Person::Person(std::string o_name)
{
    mo_name = o_name;
}

std::string Person::GetName()
{
    return mo_name;
}

int32_t Person::Guess()
{
    int32_t s32_ret = 0;

    std::cout << mo_name << ">>";
    std::cin >> s32_ret;

    return s32_ret;
}