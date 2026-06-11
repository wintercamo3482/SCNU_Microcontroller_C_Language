#include "Pipe.h"

#include <iostream>

int main(void)
{
    Pipe o_pipe;
    
    for (int32_t s32_i = 0; s32_i < 6; s32_i++) // 0~5 파이프에 삽입
    {
        o_pipe.arrive(s32_i);
    }

    o_pipe.show();

    for (int32_t s32_i = 6; s32_i < 12; s32_i++) // 6~12 파이프에 삽입
    {
        o_pipe.arrive(s32_i);
    }
    
    o_pipe.show();

    int32_t s32_front = o_pipe.shift();         // 맨 앞 데이터 뽑고, 수들을 한 자리씩 앞으로 이동

    std::cout << "shift()로 제거된 맨 앞 데이터: " << s32_front << std::endl;

    o_pipe.show();

    s32_front = o_pipe.arrive(50);              // 파이프의 맨 뒤에 50 삽입. 수들을 앞으로 이동하고 꽉 차있으면 맨 앞 수 리턴. 꽉 차 있지 않으면 -1 리턴
    std::cout << "arrive(50)로 제거된 맨 앞 데이터: " << s32_front << std::endl;

    o_pipe.show();

    return 0;
}