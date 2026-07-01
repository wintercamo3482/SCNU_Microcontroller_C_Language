#include "Wallet.h"

#include <iostream>

Wallet::Wallet(std::string o_name, int32_t s32_money)
{
    mo_name = o_name;
    ms32_money = s32_money;
}

void Wallet::show()
{
    std::cout << mo_name << " 지갑에 " << ms32_money << "원 있어요." << std::endl;
}

Wallet& Wallet::operator+=(int32_t s32_money)
{
    ms32_money += s32_money;
    return *this;
}

Wallet& Wallet::operator-=(int32_t s32_money)
{
    ms32_money -= s32_money;
    return *this;
}

Wallet& Wallet::operator=(const Wallet& ro_src)
{
    if (this != &ro_src)
    {
        ms32_money = ro_src.ms32_money;
    }
    return *this;
}

Wallet operator+(const Wallet& ro_left, const Wallet& ro_right)
{
    Wallet o_ret("", ro_left.ms32_money + ro_right.ms32_money);
    return o_ret;
}

Wallet operator+(const Wallet& ro_left, int32_t s32_money)
{
    Wallet o_ret("", ro_left.ms32_money + s32_money);
    return o_ret;
}

Wallet operator+(int32_t s32_money, const Wallet& ro_right)
{
    Wallet o_ret("", s32_money + ro_right.ms32_money);
    return o_ret;
}