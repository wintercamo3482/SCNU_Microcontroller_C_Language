#ifndef VECTOR_1_H
#define VECTOR_1_H

#include <stdint.h>

#define DEFAULT_SIZE    5

class Vector
{
private:
    int32_t* mps32_mem; // 생성자에서 배열 할당. 할당받은 배열의 주소 저장
    int32_t ms32_size;  // 생성자에서 할당받은 배열의 크기

public:
    Vector();
    Vector(int32_t s32_size, int32_t s32_value);
    ~Vector();

    void show();
    void show(int32_t s32_count);
};

#endif /* VECTOR_1_H */