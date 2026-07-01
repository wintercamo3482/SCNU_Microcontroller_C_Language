#ifndef WALLET_H
#define WALLET_H

#include <string>
#include <stdint.h>

class Wallet
{
private:
    std::string mo_name;
    int32_t ms32_money;

public:
    Wallet(std::string o_name = "", int32_t s32_money = 0);

    void show();

    Wallet& operator+=(int32_t s32_money);
    Wallet& operator-=(int32_t s32_money);
    Wallet& operator=(const Wallet& ro_src);

    friend Wallet operator+(const Wallet& ro_left, const Wallet& ro_right);
    friend Wallet operator+(const Wallet& ro_left, int32_t s32_money);
    friend Wallet operator+(int32_t s32_money, const Wallet& ro_right);
};

#endif /* WALLET_H */