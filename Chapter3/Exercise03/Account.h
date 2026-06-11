#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdint.h>
#include <string>

class Account
{
private:
    std::string mo_name;
    int32_t ms32_balance;

public:
    Account(std::string o_name);
    
    void deposit(int32_t s32_money);
    int32_t withdraw(int32_t s32_money);
    
    int32_t inquiry();
    std::string getOwner();
};

#endif /* ACCOUNT_H */