#include <iostream>
#include <string>
#include <stdint.h>

int main(void)
{
	std::string o_line;
	std::string o_dest;

	char c8_ch;

	std::cout << "텍스트 입력(한글 안 됨)>>";
	std::getline(std::cin, o_line);
	
	for (int32_t s32_i = 0; s32_i < o_line.size(); s32_i++)
	{
		c8_ch = o_line[s32_i];

		if (isalpha(c8_ch) || c8_ch == ' ')
		{
			o_dest.append(1, c8_ch);
		}
	}
	
	std::cout << o_dest << std::endl;
	
	return 0;
}