#include "Exp.h"

Exp::Exp()
{
    s32_base = 1;
    s32_exp = 1;
}

Exp::Exp(int32_t s32_b)
{
    s32_base = s32_b;
    s32_exp = 1;
}

Exp::Exp(int32_t s32_b, int32_t s32_e)
{
    s32_base = s32_b;
    s32_exp = s32_e;
}

int32_t Exp::getValue()
{
    int32_t s32_ret = 1;

    for (int32_t s32_i = 0; s32_i < s32_exp; s32_i++)
    {
        s32_ret *= s32_base;
    }
    return s32_ret;
}

int32_t Exp::getBase()
{
    return s32_base;
}

int32_t Exp::getExp()
{
    return s32_exp;
}
bool Exp::equals(Exp o_other)
{
    bool b1_ret = false;

    if (getValue() == o_other.getValue())
    {
        b1_ret = true;
    }
    else
    {
        b1_ret = false;
    }
    return b1_ret;
}