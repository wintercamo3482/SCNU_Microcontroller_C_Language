#include "ColorPoint.h"

int main(void)
{
    ColorPoint o_cp(5, 5, "RED");
    
    o_cp.setPoint(30, 40);
    o_cp.setColor("Blue");
    o_cp.show();

    return 0;
}