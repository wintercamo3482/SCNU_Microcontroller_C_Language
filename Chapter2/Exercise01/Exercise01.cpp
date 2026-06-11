#include <iostream>

int main(void)
{
	int32_t s32_n1 = 0;
	int32_t s32_n2 = 0;

	std::cout << "두 개의 정수를 입력하세요>>";
	std::cin >> s32_n1 >> s32_n2;

	std::cout << s32_n1 << "+" << s32_n2 << "=" << s32_n1 + s32_n2 << std::endl;
	std::cout << s32_n1 << "-" << s32_n2 << "=" << s32_n1 - s32_n2 << std::endl;
	std::cout << s32_n1 << "x" << s32_n2 << "=" << s32_n1 * s32_n2 << std::endl;

	return 0;
}