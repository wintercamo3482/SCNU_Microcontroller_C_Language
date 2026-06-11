#include <iostream>
#include <cstring>

int main()
{
	char ac8_text[100];

	std::cout << "빈칸 없이 문자열을 입력하세요>>";
	std::cin >> ac8_text;

	for (int32_t s32_i = 0; s32_i < strlen(ac8_text); s32_i++)
	{
		std::cout << ac8_text[s32_i] << ' ';
	}

	std::cout << std::endl;

	return 0;
}