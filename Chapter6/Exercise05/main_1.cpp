#include "Vector_1.h"

int main(void)
{
    Vector o_x;         // 5 크기의 동적 배열을 할당하고 0으로 초기화
    Vector o_y(10, 8);  // 10 크기의 동적 배열을 할당하고 8로 초기화

    o_x.show();         // 벡터 o_x를 모두 출력
    o_y.show();         // 벡터 o_y를 모두 출력
    o_y.show(3);        // 벡터 o_y의 원소 중 앞의 3개 출력

    return 0;
}