#include "Cafe.h"

#include <iostream>

#define ESPRESSO_PRICE    3000
#define AMERICANO_PRICE   3500
#define CAPPUCCINO_PRICE  4000

Cafe::Cafe()
{
    ms32_total_income = 0;
};

int32_t Cafe::getPrice(std::string o_menu, int32_t s32_count)
{
    int32_t s32_ret = 0;

    if (o_menu == "에스프레소")
    {
        s32_ret = ESPRESSO_PRICE * s32_count;
    }
    else if (o_menu == "아메리카노")
    {
        s32_ret = AMERICANO_PRICE * s32_count;
    }
    else if (o_menu == "카푸치노")
    {
        s32_ret = CAPPUCCINO_PRICE * s32_count;
    }
    
    return s32_ret;
}

void Cafe::run()
{
    int32_t s32_count = 0;
    int32_t s32_price = 0;
    std::string o_menu;

    std::cout << "에스프레소 " << ESPRESSO_PRICE << "원, 아메리카노 " << AMERICANO_PRICE << "원, 카푸치노 " << CAPPUCCINO_PRICE << "원입니다." << std::endl;

    do
    {
        std::cout << "주문>>";
        std::cin >> o_menu >> s32_count;

        s32_price = getPrice(o_menu, s32_count);

        if (s32_price == 0)
        {
            std::cout << o_menu << "은 판매하지 않는 메뉴입니다." << std::endl;
            continue;
        }

        std::cout << s32_price << "원입니다. 맛있게 드세요" << std::endl;

        ms32_total_income += s32_price;

    } while (ms32_total_income < 30000);

    std::cout << "오늘 " << ms32_total_income << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << std::endl;
}