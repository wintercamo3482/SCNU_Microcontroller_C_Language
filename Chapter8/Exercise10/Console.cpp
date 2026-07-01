#include "Console.h"

#include <iostream>

int32_t Console::GetMenu()
{
    int32_t s32_ret = 0;

    std::cout << std::endl;
    std::cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
    std::cin >> s32_ret;

    return s32_ret;
}

int32_t Console::GetTime()
{
    int32_t s32_ret = 0;

    std::cout << "07시:1, 12시:2, 17시:3>> ";
    std::cin >> s32_ret;

    return s32_ret;
}

int32_t Console::GetSeatNO()
{
    int32_t s32_ret;

    std::cout << "좌석 번호>> ";
    std::cin >> s32_ret;
    std::cin.ignore();

    return s32_ret;
}

std::string Console::GetName()
{
    std::string o_ret;

    std::cout << "이름 입력>> ";
    std::getline(std::cin, o_ret);

    return o_ret;
}