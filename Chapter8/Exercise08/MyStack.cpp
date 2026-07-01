#include "MyStack.h"

MyStack::MyStack(int32_t s32_capacity)
: BaseArray(s32_capacity)
, ms32_top(0)
{}

void MyStack::push(int32_t s32_value)
{
    put(ms32_top++, s32_value);
}

int32_t MyStack::pop()
{
    int32_t s32_ret = get(--ms32_top);
    return s32_ret;
}

int32_t MyStack::length()
{
    return ms32_top;
}