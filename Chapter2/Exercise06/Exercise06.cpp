#include <iostream>
#include <string>

int main(void)
{
	std::string o_day;
	int32_t s32_first_day = 0;

	std::cout << "3월 1일은 무슨 요일입니까?>>";
	std::cin >> o_day;

	if (o_day == "일")
	{
		s32_first_day = 0;
	}
	else if (o_day == "월")
	{
		s32_first_day = 1;
	}
	else if (o_day == "화")
	{
		s32_first_day = 2;
	}
	else if (o_day == "수")
	{
		s32_first_day = 3;
	}
	else if (o_day == "목")
	{
		s32_first_day = 4;
	}
	else if (o_day == "금")
	{
		s32_first_day = 5;
	}

	else if (o_day == "토")
	{
		s32_first_day = 6;
	}

	std::cout << "일\t월\t화\t수\t목\t금\t토" << std::endl;

	for (int32_t s32_i = 0; s32_i < s32_first_day; s32_i++)
	{
		std::cout << '\t';
	}

	for (int32_t s32_date = 1; s32_date <= 31; s32_date++)
	{
		std::cout << s32_date << '\t';

		if ((s32_first_day + s32_date) % 7 == 0)
		{
			std::cout << std::endl;
		}
	}

	return 0;
}