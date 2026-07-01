#ifndef MYQUEUE_H
#define MYQUEUE_H

#include "BaseArray.h"

class MyQueue : public BaseArray
{
public:
    MyQueue(int32_t s32_capacity = 100);
    
    void enqueue(int32_t s32_value);
    
    int32_t dequeue();
    int32_t length();

private:
    int32_t ms32_front;
    int32_t ms32_rear;
};

#endif /* MYQUEUE_H */