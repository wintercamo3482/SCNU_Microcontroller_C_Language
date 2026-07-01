#ifndef MYSTACK_H
#define MYSTACK_H

#include "BaseArray.h"

class MyStack : public BaseArray
{
public:
    MyStack(int32_t s32_capacity = 100);

    void push(int32_t s32_value);
    int32_t pop();
    int32_t length();

private:
    int32_t ms32_top;
};

#endif /* MYSTACK_H */