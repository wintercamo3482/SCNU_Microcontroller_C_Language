#include "Power.h"

int main(void)
{
    Power o_a(1, 2);
    Power o_b(10, 20);
    Power o_c(100, 200);

    o_c.add(o_a).add(o_b).add(Power(1000, 2000));
    o_c.show();

    return 0;
}