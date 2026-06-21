#include "Random.h"

#include <iostream>

int main(void)
{
    Random::seed();

    std::cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << std::endl;
    std::cout << "-> ";

    for (int32_t s32_i = 0; s32_i < 10; s32_i++)
    {
        std::cout << Random::nextInt(1, 100) << ' ';
    }
    std::cout << std::endl;

    std::cout << "알파벳을 랜덤하게 10개를 출력합니다." << std::endl;
    std::cout << "-> ";

    for (int32_t s32_i = 0; s32_i < 10; s32_i++)
    {
        std::cout << Random::nextAlphabet() << ' ';
    }
    std::cout << std::endl;

    std::cout << "랜덤한 실수를 10개를 출력합니다." << std::endl;
    std::cout << "-> ";

    for (int32_t s32_i = 0; s32_i < 10; s32_i++)
    {
        std::cout << Random::nextDouble() << ' ';
    }
    std::cout << std::endl;

    return 0;
}