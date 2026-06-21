#include "MyPipe.h"

#include <iostream>

int main(void)
{
    MyPipe o_a(5);              // 5개의 정수 저장이 가능한 파이프 객체 생성
    o_a.put(10); o_a.put(20);   // 파이프 o_a에 10, 20을 순서대로 저장

    MyPipe o_b = o_a;           // 복사 생성(객체 a를 복사하여 b 생성)
    o_b.put(30);                // 파이프 o_b에는 10, 20, 30 순으로 정수 저장
    std::cout << "파이프 o_a에 저장된 개수 : " << o_a.getSize() << std::endl;
    std::cout << "파이프 o_b에 저장된 개수 : " << o_b.getSize() << std::endl;

    int32_t s32_n = 0;
    o_a.get(s32_n);             // 파이프 o_a의 맨 앞에 있는 정수 얻어오기. s32_n은 10
    std::cout << "파이프 o_a에서 빼온 값 " << s32_n << std::endl;
    
    o_b.get(s32_n);             // 파이프 o_b의 맨 앞에 있는 정수 얻오오기. s32_n은 10
    std::cout << "파이프 o_b에서 빼온 값 " << s32_n << std::endl;

    return 0;
}