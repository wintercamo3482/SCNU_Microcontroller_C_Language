#include "Coffee_1.h"

int main()
{
    Coffee o_a(2, 5, 0, 0);
    Coffee o_b(2, 2, 2, 2);

    o_a << o_b << 3;        // 커피 o_a에 커피 o_b를 더하고, 물 양을 3 더한다.
    o_a.show();

    return 0;
}