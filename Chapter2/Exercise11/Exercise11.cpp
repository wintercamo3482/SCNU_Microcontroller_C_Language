#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	int32_t s32_answer = 0;
	int32_t s32_wrong = 0;

	int32_t s32_num1 = 0;
	int32_t s32_num2 = 0;

	srand((unsigned)time(0));

	std::cout << "*** 구구단 맞추기 퀴즈입니다. ***" << std::endl;

	while (true)
	{
		s32_num1 = rand() % 8 + 2;
		s32_num2 = rand() % 8 + 2;

		std::cout << s32_num1 << 'x' << s32_num2 << '=';
		std::cin >> s32_answer;
	
		if (s32_answer == s32_num1 * s32_num2)
		{
			std::cout << "정답입니다. 잘했습니다." << std::endl;
		}
		else
		{
			std::cout << ++s32_wrong << "번 틀렸습니다. ";

			if (s32_wrong < 3)
			{
				std::cout << "분발하세요." << std::endl;
			}

			else
			{
				std::cout << "퀴즈 종료합니다." << std::endl;
				break;
			}
		}
	}

	return 0;
}