#include "Matrix_1.h"

#include <iostream>

int main()
{
    Matrix o_a(4, 3, 2, 1);
    Matrix o_b;

    int32_t as32_x[4];
    int32_t as32_y[4] = { 1,2,3,4 };    // 2차원 행렬의 4 개의 원소 값

    o_a >> as32_x; // o_a의 각 원소를 배열 as32_x에 복사. as32_x[]는 {4,3,2,1}
    o_b << as32_y; // 배열 as32_y의 원소 값을 o_b의 각 원소에 설정

    for (int32_t s32_i = 0; s32_i < 4; s32_i++)
    {
        std::cout << as32_x[s32_i] << ' ';  // as32_x[] 출력
    }
 
    std::cout << std::endl;

    o_b.show();

    return 0;
}