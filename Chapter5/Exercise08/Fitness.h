#ifndef FITNESS_H
#define FITNESS_H

#include <string>
#include <stdint.h>

class Fitness
{
private:
    int32_t ms32_men;
    int32_t ms32_women;

public:
    Fitness();

    Fitness& arrive(std::string o_gender, int32_t s32_count);
    void count(std::string o_gender, int32_t& rs32_count);
    int32_t& at(std::string o_gender);
};

#endif /* FITNESS_H */