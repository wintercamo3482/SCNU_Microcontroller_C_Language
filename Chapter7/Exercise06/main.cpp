#include "Light.h"

#include <iostream>

int main(void)
{
    Light o_a(10);
    Light o_b(20);

    // o_c는 1, o_d의 크기는 0
    Light o_c;
    Light o_d(0);

    (o_a += o_b) += 10;           // 빛 o_a에 o_b를 더하면 o_b는 크기를 잃고 0이 된다.
    
    // 빛 o_a, o_b, o_c의 크기 출력
    ~o_a;
    ~o_b;
    ~o_c;

    o_d = o_c--;                // o_d의 빛 크기는 1이 되고 o_c의 빛 크기 1 감소, 0이 됨
    ~o_d;                       // 빛 o_d의 크기 출력

    if (o_c == 0)
    {
        std::cout << "빛 o_c는 꺼져 있습니다." << std::endl;
    }
    if (o_d == 0)
    {
        std::cout << "빛 o_d는 꺼져 있습니다." << std::endl;
    }

    return 0;
}