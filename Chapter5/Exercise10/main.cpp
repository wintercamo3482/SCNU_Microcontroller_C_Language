#include "MyPipe.h"

#include <iostream>

int main(void)
{
    MyPipe o_pipe;                                              // 5개의 정수 저장이 가능판 파이프 객체 생성

    for (int32_t s32_i = 0; s32_i < MAX_NUMBER + 1; s32_i++)    // 6개의 정수 삽입
    {
        if (o_pipe.put(s32_i))
        {
            std::cout << s32_i << ' ';                          // 삽입한 정수 화면 출력
        }
        else
        {
            std::cout << std::endl << s32_i + 1 << "번째 put 실패! 파이프 꽉 참" << std::endl;
        }
    }

    std::cout << "현재 파이프 크기 : " << o_pipe.getSize() << std::endl;

    int32_t s32_n = 0;

    for (int32_t s32_i = 0; s32_i < MAX_NUMBER + 1; s32_i++)    // 6번 팝
    {
        if (o_pipe.get(s32_n))
        {
            std::cout << s32_n << ' ';                          // 받아온 정수 확인 출력
        }
        else
        {
            std::cout << std::endl << s32_i + 1 << "번째 get 실패! 파이프 비어 있음" << std::endl;
        }
    }
    
    std::cout << "현재 파이프 크기 : " << o_pipe.getSize() << std::endl;

    return 0;
}