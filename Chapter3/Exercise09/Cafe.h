#ifndef CAFE_H
#define CAFE_H

#include <string>
#include <stdint.h>

class Cafe
{
private:
    int32_t ms32_total_income;

public:
    Cafe();

    int32_t getPrice(std::string o_menu, int32_t s32_count);
    void run();
};

#endif /* CAFE_H */