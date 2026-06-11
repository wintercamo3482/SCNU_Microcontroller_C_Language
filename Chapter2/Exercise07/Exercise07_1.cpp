#include <iostream>
#include <cstring>

int main(void)
{
	char ac8_buf0[100];
	char ac8_buf1[100];

	std::cout << "문자열을 입력하세요>>";
	std::cin >> ac8_buf0;

	std::cout << "문자열을 입력하세요>>";
	std::cin >> ac8_buf1;

	if (strcmp(ac8_buf0, ac8_buf1) == 0)
	{
		std::cout << "Yes" << std::endl;
	}

	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}