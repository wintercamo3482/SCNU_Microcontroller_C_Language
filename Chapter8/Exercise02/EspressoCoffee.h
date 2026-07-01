#ifndef ESPRESSOCOFFEE_H
#define ESPRESSOCOFFEE_H

#include <string>

class EspressoCoffee
{
public:
    EspressoCoffee(std::string o_name, int32_t s32_espresso, int32_t s32_water);

    void recipe();

    void get(std::string& ro_name, int32_t& rs32_espresso, int32_t& rs32_water);
    
private:
    std::string mo_name;
    int32_t ms32_espresso;
    int32_t ms32_water;
};

#endif /* ESPRESSOCOFFEE_H */