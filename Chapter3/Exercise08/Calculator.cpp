#include "Calculator.h"

#include <iostream>

void Calculator::calc(string o_op, int32_t s32_number)
{
    if (o_op == "+")
    {
        ms32_value += s32_number;
    }
    else if (o_op == "-")
    {
        ms32_value -= s32_number;
    }
    else if (o_op == "*")
    {
        ms32_value *= s32_number;
    }
    else if (o_op == "/" && s32_number != 0)
    {
        ms32_value /= s32_number;
    }
}

void Calculator::loop()
{
    string o_op;
    int32_t s32_number = 0;

    do
    {
        std::cout << "입력>>";
        std::cin >> o_op;

        if (o_op == "그만")
        {
            break;
        }
        
        std::cin >> s32_number;
        calc(o_op, s32_number);

    } while (true);
}