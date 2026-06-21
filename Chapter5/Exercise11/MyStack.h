#ifndef MYSTACK_H
#define MYSTACK_H

#include <stdint.h>

class MyStack
{
    int32_t* mps32_p;   // 정수를 저장할 동적 배열에 대한 포인터
    int32_t ms32_size;  // 할당받은 동적 배열의 크기. 초기값 0
    int32_t ms32_tos;   // 다음에 저장될 배열 원소의 인덱스. 초기값 0

public:
    MyStack();
    MyStack(int32_t s32_size);
    MyStack(const MyStack& ro_src); // 복사 생성자
    ~MyStack();
    bool push(int32_t s32_n);       // 정수 s32_n을 스택 푸시. 꽉 차 있으면 false, 아니면 true 리턴
    bool pop(int32_t& rs32_n);      // 스택의 탑에 있는 값을 s32_n에 팝
                                    // 스택이 비어 있으면 false, 아니면 true 리턴
};

#endif /* MYSTACK_H */