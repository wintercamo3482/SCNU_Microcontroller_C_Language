#ifndef EXP_H
#define EXP_H

#include <stdint.h>

class Exp
{
private:
    int32_t s32_base;
    int32_t s32_exp;
public:
    Exp();
    Exp(int32_t s32_b);
    Exp(int32_t s32_b, int32_t s32_e);

    int32_t getValue();
    int32_t getBase();
    int32_t getExp();

    bool equals(Exp o_other);
};

#endif /* EXP_H */