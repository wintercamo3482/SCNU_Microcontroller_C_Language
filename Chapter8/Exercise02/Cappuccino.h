#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H

#include "EspressoCoffee.h"

class Cappuccino : public EspressoCoffee
{
public:
    Cappuccino(std::string o_name, int32_t s32_espresso, int32_t s32_water, int32_t s32_milk, bool b1_ice);
    
    void recipe();

private:
    int32_t ms32_milk;
    bool mb1_ice;
};

#endif /* CAPPUCCINO_H */