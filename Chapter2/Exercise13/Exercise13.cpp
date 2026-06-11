#include <iostream>
#include <string>

int main(void)
{
	std::string o_menu;
	
	int32_t s32_price = 0;
	int32_t s32_count = 0;
	int32_t s32_total_income = 0;

	std::cout << "에스프레소 3000원, 아메리카노 3500원, 카푸치노 4000원입니다." << std::endl;

	do
	{
		std::cout << "주문>>";
		std::cin >> o_menu >> s32_count;

		if (o_menu == "에스프레소")
		{
			s32_price = 3000 * s32_count;
		}

		else if (o_menu == "아메리카노")
		{
			s32_price = 3500 * s32_count;
		}

		else if (o_menu == "카푸치노")
		{
			s32_price = 4000 * s32_count;
		}

		else
		{
			std::cout << o_menu << "는 판매하지 않는 메뉴입니다." << std::endl;
		}

		std::cout << s32_price << "원입니다. 맛있게 드세요." << std::endl;

		s32_total_income += s32_price;

	} while(s32_total_income < 30000);
	
	std::cout << "오늘 " << s32_total_income << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << std::endl;
	
	return 0;
}