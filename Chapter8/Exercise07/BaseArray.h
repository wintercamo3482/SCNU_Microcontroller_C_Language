#ifndef BASEARRAY_H
#define BASEARRAY_H

#include <stdint.h>

class BaseArray
{
public:
    int32_t getCapacity();

protected:
    BaseArray(int32_t s32_capacity = 50);
    ~BaseArray();

    void put(int32_t s32_index, int32_t s32_val);

    int32_t get(int32_t s32_index);

private:
    int32_t ms32_capacity;  // 동적 할당된 메모리 용량
    int32_t* mps32_mem;
};

#endif /* BASEARRAY_H */