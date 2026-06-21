#include "MyStack.h"

#include <iostream>

int main(void)
{
    MyStack o_a(10);            // 10개의 저장 공간을 가진 객체 생성
    o_a.push(10); o_a.push(20); // 스택 o_a에는 10, 20의 순서로 정수 저장

    MyStack o_b = o_a;          // 복사 생성(객체 o_a를 복사하여 객체 o_b 생성)
    o_b.push(30);               // 스택 o_b에는 10, 20, 30의 순서로 정수 저장

    int32_t s32_n = 0;

    o_a.pop(s32_n);             // 스택 o_a의 최상단에 저장된 정수 팝. s32_n은 20
    std::cout << "스택 o_a에서 팝한 값 " << s32_n << std::endl;
    o_b.pop(s32_n);             // 스택 o_b의 최상단에 저장된 정수 팝. s32_n은 30
    std::cout << "스택 o_b에서 팝한 값 " << s32_n << std::endl;

    return 0;
}