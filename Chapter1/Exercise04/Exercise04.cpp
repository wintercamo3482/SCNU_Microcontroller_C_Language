#include <iostream>

int main(void)
{
    for (int32_t s32_i = 0; s32_i < 4; s32_i++)
    {
        for (int32_t s32_j = 0; s32_j <= s32_i; s32_j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}