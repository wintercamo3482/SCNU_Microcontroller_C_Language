#include "Polygon.h"

#include <iostream>

int main(void)
{
    Polygon o_poly(6);
    
    int32_t s32_n = 0;
    int32_t s32_x = 0;
    int32_t s32_y = 0;

    bool b1_res = false;

    o_poly.read();

    s32_n = 3;
    b1_res = o_poly.get(s32_n, s32_x, s32_y);   // s32_n(1부터 시작) 번째 정의 s32_x, s32_y 값 알아내기
    
    if (b1_res == true)
    {
        std::cout << s32_n << "번째 점은 " << "(" << s32_x << ", " << s32_y << ")" << std::endl;
    }
    else
    {
        std::cout << s32_n << "번째 점은 없습니다." << std::endl;
    }
        return 0;
}