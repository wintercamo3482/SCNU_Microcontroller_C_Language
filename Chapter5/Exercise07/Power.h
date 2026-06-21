#ifndef POWER_H
#define POWER_H

#include <stdint.h>

class Power
{
    int32_t ms32_kick;
    int32_t ms32_punch;

public:
    Power(int32_t s32_kick, int32_t s32_punch); // 생성자
    Power& add(Power o_p);                      // 현재 파워에 매개 변수 o_p의 파워를 더한다.
    void show();                                // kick과 punch를 출력한다.
};

#endif /* POWER_H */