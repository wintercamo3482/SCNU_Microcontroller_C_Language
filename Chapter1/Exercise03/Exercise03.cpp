#include <iostream>

int main(void)
{
	int32_t s32_start = 1;
	int32_t s32_end = 10;
	int32_t s32_sum = 0;
	
	for (int32_t s32_i = s32_start; s32_i <= s32_end; s32_i++)
	{
		s32_sum += s32_i;
	}

	std::cout << s32_start << "에서 " << s32_end << "까지 더한 결과는 " << s32_sum << "입니다" << std::endl;

	return 0;
}