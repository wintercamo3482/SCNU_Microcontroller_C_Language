#ifndef LIGHT_H
#define LIGHT_H

#include <stdint.h>

class Light
{
private:
    int32_t ms32_size;

public:
    Light(int32_t s32_size = 1);
    
    Light& operator+=(Light& ro_other);
    Light& operator+=(int32_t s32_size);

    Light operator--(int32_t);
    
    bool operator==(int32_t s32_size);

    void operator~();
};

#endif /* LIGHT_H */