#include "BaseArray.h"

BaseArray::BaseArray(int32_t s32_capacity)
: ms32_capacity(s32_capacity)
{
    mps32_mem = new int[s32_capacity];
}

BaseArray::~BaseArray()
{
    delete[] mps32_mem;
}

int32_t BaseArray::getCapacity()
{
    return ms32_capacity;
}

void BaseArray::put(int32_t s32_index, int32_t s32_val)
{
    mps32_mem[s32_index] = s32_val;
}

int32_t BaseArray::get(int32_t s32_index)
{
    return mps32_mem[s32_index];
}