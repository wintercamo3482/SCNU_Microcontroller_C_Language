#include <iostream>
#include <string>

int main()
{
	std::string o_text;

	std::cout << "빈칸 없이 문자열을 입력하세요>>";
	std::cin >> o_text;

	for (int32_t s32_i = 0; s32_i < o_text.length(); s32_i++)
	{
		std::cout << o_text[s32_i] << ' ';
	}

	std::cout << std::endl;

	return 0;
}