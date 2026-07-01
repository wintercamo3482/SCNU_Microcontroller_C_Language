#include "Matrix_2.h"

#include <iostream>

int main(void)
{
    Matrix o_a(1, 2, 3, 4);
    Matrix o_b(2, 3, 4, 5);
    Matrix o_c;

    o_c = o_a + o_b;
    o_a += o_b;

    o_a.show();
    o_b.show();
    o_c.show();

    if (o_a == o_c)
    {
        std::cout << "o_a와 o_c는 같습니다." << std::endl;
    }

    return 0;
}