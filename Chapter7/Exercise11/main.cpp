#include "SortedArray.h"

int main(void)
{
    int32_t as32_n[] = { 2, 20, 6 };
    int32_t as32_m[] = { 10, 7, 8, 30 };

    SortedArray o_a(as32_n, 3);
    SortedArray o_b(as32_m, 4);
    SortedArray o_c;

    o_c = o_a + o_b;

    o_a.show();
    o_b.show();
    o_c.show();

    return 0;
}