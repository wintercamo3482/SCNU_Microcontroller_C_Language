#include <iostream>

bool compare(int32_t s32_a, int32_t s32_b, int32_t& rs32_min, int32_t& rs32_max)
{
	bool b1_ret = false;
	
	
	if (s32_a == s32_b)
	{
		b1_ret = true;
	}
	else if (s32_a < s32_b)
	{
		rs32_min = s32_a;
		rs32_max = s32_b;
	}
	else
	{
		rs32_min = s32_b;
		rs32_max = s32_a;
	}
	
	return b1_ret;
}

int main(void)
{
	int32_t s32_a = 0;
	int32_t s32_b = 0;
	int32_t s32_min = 0;
	int32_t s32_max = 0;

	bool b1_res = false;

	std::cout << "두 수 입력>>";
	std::cin >> s32_a >> s32_b;

	b1_res = compare(s32_a, s32_b, s32_min, s32_max);

	if (b1_res == true)
	{
		std::cout << "두 수는 같습니다.";
	}
	else
	{
		std::cout << "작은 수는 " << s32_min << ", 큰 수는 " << s32_max;
	}
	return 0;
}