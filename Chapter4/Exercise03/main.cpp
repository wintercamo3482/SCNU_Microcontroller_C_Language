#include <iostream>
#include <string>


int main(void)
{
	std::string o_line;
	std::string o_dest;

	std::cout << "텍스트 입력>>";
	std::getline(std::cin, o_line, '\n');

	for (int32_t s32_i = 0; s32_i < o_line.size(); s32_i++)
	{
		if (o_line[s32_i] == ' ')
		{
			if (!o_dest.empty() && o_dest[o_dest.size() - 1] == ' ')
			{
				continue;
			}
		}
		o_dest.append(1, o_line[s32_i]);
	}

	std::cout << o_dest << std::endl;

	return 0;
}