#ifndef MYSTACK_H
#define MYSTACK_H

#include <stdint.h>

#define MAX_NUMBER      10

class MyStack
{
private:
    int32_t mas32_p[MAX_NUMBER];    // 정수가 저장될 배열. 최대 10개
    int32_t ms32_tos;               // 다음에 저장될 배열 원소의 인덱스. 초기값 0
public:
    MyStack();
    bool push(int32_t s32_n);       // 정수 s32_n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
    bool pop(int32_t& rs32_n);      // 스택 꼭대기에 있는 정수를 mas32_p[]에서 제거하고 rs32_n에 저장
                                    // 스택이 비어 있으면 false, 아니면 true 리턴
};


#endif /* MYSTACK_H */