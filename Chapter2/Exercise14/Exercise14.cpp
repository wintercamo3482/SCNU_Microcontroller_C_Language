#include <iostream>
#include <string>

#define JJAJANG_MAX		10
#define JJAMPPONG_MAX	20
#define BOKKEUM_MAX		5

int main(void)
{
	std::string o_menu;
	int32_t s32_count = 0;

	int32_t s32_jjajang_count = JJAJANG_MAX;
	int32_t s32_jjamppong_count = JJAMPPONG_MAX;
	int32_t s32_bokkeum_count = BOKKEUM_MAX;

	std::cout << "오늘의 주문 가능량 : 짜장면 " << s32_jjajang_count << "인분, 짬뽕 " << s32_jjamppong_count << "인분, 볶음밥 " << s32_bokkeum_count << "인분" << std::endl;

	do
	{

		if (s32_jjajang_count == 0 && s32_jjamppong_count == 0 && s32_bokkeum_count == 0)
		{
			break;
		}

		std::cout << "주문>>";
		std::cin >> o_menu >> s32_count;
		
		if (o_menu == "짜장면")
		{
			if (s32_count <= s32_jjajang_count)
			{
				s32_jjajang_count -= s32_count;
			}

			else
			{
				std::cout << s32_jjajang_count << "인분만 주문 가능합니다." << std::endl;
			}
		}

		else if (o_menu == "짬뽕")
		{
			if (s32_count <= s32_jjamppong_count)
			{
				s32_jjamppong_count -= s32_count;
			}

			else
			{
				std::cout << s32_jjamppong_count << "인분만 주문 가능합니다." << std::endl;
			}
		}

		else if (o_menu == "볶음밥")
		{
			if (s32_count <= s32_bokkeum_count)
			{
				s32_bokkeum_count -= s32_count;
			}
			
			else
			{
				std::cout << s32_bokkeum_count << "인분만 주문 가능합니다." << std::endl;
			}
		}
		
		else
		{
			std::cout << o_menu << "은 없는 메뉴입니다." << std::endl;
			break;
		}

		std::cout << "가능 주문량 : 짜장면 " << s32_jjajang_count << "인분, 짬뽕 " << s32_jjamppong_count << "인분, 볶음밥 " << s32_bokkeum_count << "인분" << std::endl;

	} while (true);

	std::cout << "프로그램 종료합니다." << std::endl;
	
	return 0;
}