#ifndef CONTAINER_H
#define CONTAINER_H

#include <stdint.h>

#define MAX_CONTAIN     10

class Container         // 통 하나를 나타내는 클래스
{
    int32_t ms32_size;  // 현재 저장량, 최대 저장량은 10

public:
    unsigned m_length = 0;

public:
    Container() { ms32_size = 10; }
    void fill(int32_t s32_n);       // n 만큼 채우기
    bool consume(int32_t s32_n);    // n 만큼 소모하기
    int32_t getSize();              // 현재 크기 리턴
};

#endif /* CONTAINER_H */