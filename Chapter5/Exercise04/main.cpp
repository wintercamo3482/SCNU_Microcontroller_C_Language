#include "Bubble.h"

#include <iostream>

bool combineBubble(Bubble& ro_a, Bubble& ro_b)
{
    bool b1_ret = false;

    if (ro_a.getRadius() == ro_b.getRadius())
    {
        b1_ret = true;
    }

    if (ro_a.getRadius() > ro_b.getRadius())
    {
        ro_a.setRadius(ro_a.getRadius() + ro_b.getRadius());
        ro_b.setRadius(0);
    }
    else
    {
        ro_b.setRadius(ro_a.getRadius() + ro_b.getRadius());
        ro_a.setRadius(0);
    }

    return b1_ret;
}

int main(void)
{
    Bubble o_a(5);
    Bubble o_b(10);

    if (combineBubble(o_a, o_b) == false)
    {
        std::cout << "두 버블의 크기가 같음" << std::endl;
    }
    else
    {
        std::cout << "큰 쪽으로 병합됨" << std::endl;
    }

    std::cout << "버블 a의 반지름 " << o_a.getRadius() << std::endl;
    std::cout << "버블 b의 반지름 " << o_b.getRadius() << std::endl;

    return 0;
}