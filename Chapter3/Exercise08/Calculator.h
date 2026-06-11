#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdint.h>
#include <string>

using namespace std;

class Calculator
{
    int32_t ms32_value;
    void calc(string o_op, int32_t s32_number);

public:
    Calculator() { ms32_value = 0; }
    int32_t getValue() { return ms32_value; }
    void loop();
};

#endif /* CALCULATOR_H */