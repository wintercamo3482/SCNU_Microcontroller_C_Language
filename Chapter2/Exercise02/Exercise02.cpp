#include <iostream>

#define PI 3.14

int main(void)
{
	int32_t s32_x1 = 0;
	int32_t s32_y1 = 0;
	int32_t s32_x2 = 0;
	int32_t s32_y2 = 0;

	double d64_a = 0.0;
	double d64_b = 0.0;
	double d64_area = 0.0;


	std::cout << "사각형의 두점(x1, y1, x2, y2)을 입력하세요>>";
	std::cin >> s32_x1 >> s32_y1 >> s32_x2 >> s32_y2;

	d64_a = (s32_x2 - s32_x1) / 2.0;
	d64_b = (s32_y2 - s32_y1) / 2.0;

	d64_area = PI * d64_a * d64_b;
	
	std::cout << "타원의 면적은 " << d64_area << "입니다." << std::endl;
	
	return 0;
}