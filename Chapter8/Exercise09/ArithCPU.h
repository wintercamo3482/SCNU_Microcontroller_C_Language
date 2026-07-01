#ifndef ARITHCPU_H
#define ARITHCPU_H

#include "PrimitiveCPU.h"

#include <string>

class ArithCPU : public PrimitiveCPU
{
protected:
    void sub(int32_t s32_b);        // 빼기 연산
    void mul(int32_t s32_b);        // 곱하기 연산
    void div(int32_t s32_b);        // 나누기 연산
    void execute(std::string o_cmd, int32_t s32_operand = 1);   // 명령 cmd 처리

public:
    ArithCPU(int32_t s32_val);      // 생성자
    void run();                     // 사용자로부터 명령을 읽고 해석하여
                                    // execute()를 호출하여 명령을 실행시키는 전체적인 기능
};

#endif /* ARITHCPU_H */