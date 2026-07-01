#include "MyQueue.h"

MyQueue::MyQueue(int32_t s32_capacity)
: BaseArray(s32_capacity)
, ms32_front(0)
, ms32_rear(0)
{}

void MyQueue::enqueue(int32_t s32_value)
{
    put(ms32_rear++, s32_value);
}

int32_t MyQueue::dequeue()
{
    int32_t s32_ret = get(ms32_front++);

    return s32_ret;
}

int32_t MyQueue::length()
{
    int32_t s32_ret = ms32_rear - ms32_front;
    return s32_ret;
}