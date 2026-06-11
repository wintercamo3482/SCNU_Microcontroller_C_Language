#include <iostream>
#include <stdint.h>

#define TARGET_NUM	5

int main(void)
{
	double* pd64_temperature = new double[TARGET_NUM];

	double d64_sum = 0.0;

	std::cout << "온도 5개 입력>>";
	
	for (int32_t s32_i = 0; s32_i < TARGET_NUM; s32_i++)
	{
		std::cin >> pd64_temperature[s32_i];
		d64_sum += pd64_temperature[s32_i];
	}
	
	std::cout << "평균은 " << d64_sum / TARGET_NUM << std::endl;

	return 0;
}