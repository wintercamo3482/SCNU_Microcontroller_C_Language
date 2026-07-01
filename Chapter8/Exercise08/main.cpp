#include "MyStack.h"

#include <iostream>

int main(void)
{
    MyStack o_s;
    int32_t s32_n;

    std::cout << "스택에 삽입할 5개의 정수를 입력하라>> ";

    for (int32_t s32_i = 0; s32_i < 5; s32_i++)
    {
        std::cin >> s32_n;
        o_s.push(s32_n);    // 스택에 푸시
    }

    std::cout << "스택 용량:" << o_s.getCapacity() << ", 스택 크기:" << o_s.length() << std::endl;
    std::cout << "스택의 모든 정수를 팝하여 제거하고 출력...";

    while (o_s.length() != 0)
    {
        std::cout << o_s.pop() << ' ';  // 스택에서 팝
    }

    std::cout << std::endl;
    std::cout << "스택 용량:" << o_s.getCapacity() << ", 스택의 크기:" << o_s.length() << std::endl;

    return 0;
}