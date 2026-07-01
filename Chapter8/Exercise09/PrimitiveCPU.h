#ifndef PRIMITIVECPU_H
#define PRIMITIVECPU_H

#include <iostream>

class PrimitiveCPU
{
protected:
    PrimitiveCPU(int32_t s32_val);

    void add(int32_t s32_b);        // ms32_acc에 s32_b를 더하는 연산
    void load(int32_t s32_b);       // ms32_acc에 s32_b를 저장하는 연산
    int32_t read();                 // ms32_acc 값을 알려주는 연산
    void print();                   // ms32_acc 값을 출력하는 연산


private:
    int32_t ms32_acc;    // CPU 내 저장공간
};

#endif /* PRIMITIVECPU */