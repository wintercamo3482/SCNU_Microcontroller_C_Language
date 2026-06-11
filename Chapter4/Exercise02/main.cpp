#include <iostream>
#include <stdint.h>

int main()
{
	int32_t s32_count;

	std::cout << "구입할 물품의 개수>>";
	std::cin >> s32_count;

	int32_t* ps32_price = new int32_t[s32_count];

	std::cout << "물품 " << s32_count << "개의 가격 입력>>";
	
	for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
	{
		std::cin >> ps32_price[s32_i];
	}

	int32_t s32_min = ps32_price[0];
	int32_t s32_max = ps32_price[0];

	for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
	{
		if (ps32_price[s32_i] < s32_min)
		{
			s32_min = ps32_price[s32_i];
		}
		
		if (ps32_price[s32_i] > s32_max)
		{
			s32_max = ps32_price[s32_i];
		}

	}

	std::cout << "제일 싼 가격은 " << s32_min << std::endl;
	std::cout << "제일 비싼 가격은 " << s32_max << std::endl;
	
	delete[] ps32_price;

	return 0;
}