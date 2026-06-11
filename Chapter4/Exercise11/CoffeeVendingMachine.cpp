#include "CoffeeVendingMachine.h"

#include <iostream>

void CoffeeVendingMachine::fill()
{
    for (int32_t s32_i = 0; s32_i < MENU_NUM; s32_i++)
    {
        mao_tong[s32_i].fill(10);
    }
    show();
}

void CoffeeVendingMachine::getEspresso()
{
    do
    {
        if (mao_tong[0].getSize() < 1 ||
            mao_tong[1].getSize() < 1)
        {
            std::cout << "원료가 부족합니다." << std::endl;
            break;
        }
        
        mao_tong[0].consume(1);
        mao_tong[1].consume(1);

        std::cout << "에스프레소 드세요" << std::endl;

    } while (0);
}

void CoffeeVendingMachine::getAmericano()
{
    do
    {
        if (mao_tong[0].getSize() < 1 ||
            mao_tong[1].getSize() < 2)
        {
            std::cout << "원료가 부족합니다." << std::endl;
            break;
        }
        
        mao_tong[0].consume(1);
        mao_tong[1].consume(2);

        std::cout << "아메리카노 드세요" << std::endl;

    } while (0);
}

void CoffeeVendingMachine::getSugarCoffee()
{
    do
    {
        if (mao_tong[0].getSize() < 1 ||
            mao_tong[1].getSize() < 2 ||
            mao_tong[2].getSize() < 1)
        {
            std::cout << "원료가 부족합니다." << std::endl;
            break;
        }

        mao_tong[0].consume(1);
        mao_tong[1].consume(2);
        mao_tong[2].consume(1);

        std::cout << "설탕커피 드세요" << std::endl;

    } while (0);
}

void CoffeeVendingMachine::show()
{
    std::cout << "커피 " << mao_tong[0].getSize() << ", 물 " << mao_tong[1].getSize() << ", 설탕 " << mao_tong[2].getSize() << std::endl;
}

void CoffeeVendingMachine::run()
{
    int32_t s32_menu = 0;

    std::cout << "***** 커피자판기를 작동합니다. *****" << std::endl;

    do
    {
        std::cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
        std::cin >> s32_menu;

        switch (s32_menu)
        {
        case 1:
            getEspresso();
            break;

        case 2:
            getAmericano();
            break;

        case 3:
            getSugarCoffee();
            break;

        case 4:
            show();
            break;

        case 5:
            fill();
            break;

        default:
            return;
        }

    } while (true);
}