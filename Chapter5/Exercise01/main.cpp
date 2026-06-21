#include <iostream>

void twice(int32_t& rs32_n)
{
	rs32_n *= 2;
}

int main(void)
{
	int32_t s32_n = 12;
	twice(s32_n);		// n을 2배로 증가시킴
	std::cout << s32_n;	// 24 출력

	return 0;
}