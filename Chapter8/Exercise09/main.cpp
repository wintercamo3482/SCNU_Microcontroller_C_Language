#include "ArithCPU.h"

int main(void)
{
    ArithCPU o_myCPU(0);        // 0은 PrimitiveCPU의 ms32_acc를 0으로 초기화
    o_myCPU.run();

    return 0;
}