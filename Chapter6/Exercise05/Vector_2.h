#ifndef VECTOR_2_H
#define VECTOR_2_H

#include <stdint.h>

#define DEFAULT_SIZE    5
#define DEFAULT_VALUE   0
#define DEFAULT_COUNT   -1

class Vector
{
private:
    int32_t* mps32_mem; // 생성자에서 배열 할당. 할당받은 배열의 주소 저장
    int32_t ms32_size;  // 생성자에서 할당받은 배열의 크기

public:
    Vector(int32_t s32_size = DEFAULT_SIZE, int32_t s32_value = DEFAULT_VALUE);
    ~Vector();

    void show(int32_t s32_count = DEFAULT_COUNT);
};

#endif /* VECTOR_2_H */