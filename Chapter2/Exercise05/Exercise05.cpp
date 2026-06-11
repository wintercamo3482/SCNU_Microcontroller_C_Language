#include <iostream>

int main(void)
{
	for (int32_t s32_i = 1; s32_i <= 55; s32_i++)
	{
		std::cout << s32_i << "\t";

		if (s32_i % 10 == 0)
		{
			std::cout << std::endl;
		}
	}

	return 0;
}