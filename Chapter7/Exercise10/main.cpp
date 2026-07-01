#include "Stack.h"

#include <iostream>

int main(void)
{
    Stack o_stack;
    
    o_stack << 3 << 5 << 10;        // 3, 5, 10을 순서대로 푸시

    while (true)
    {
        if (!o_stack)               // 스택 empty
        {
            break;
        }

        int32_t s32_x;

        o_stack >> s32_x;           // 스택의 탑에 있는 정수 팝
        
        std::cout << s32_x << ' ';  // 삽입된 반대순(10, 5, 3)으로 출력
    }
    
    std::cout << std::endl;

    return 0;
}