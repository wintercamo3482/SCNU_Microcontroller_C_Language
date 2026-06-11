#ifndef COFFEE_H
#define COFFEE_H

#include <stdint.h>

class Coffee
{
private:
    int32_t ms32_coffee;
    int32_t ms32_sugar;
    int32_t ms32_milk;
    int32_t ms32_water;

public:
    Coffee();
    Coffee(int32_t s32_coffee, int32_t s32_sugar, int32_t s32_milk, int32_t s32_water);

    void show();
};

#endif /* COFFEE_H */