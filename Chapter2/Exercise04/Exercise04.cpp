#include <iostream>

int main(void)
{
	double d64_n1 = 0.0;
	double d64_n2 = 0.0;
	double d64_n3 = 0.0;
	double d64_n4 = 0.0;
	double d64_n5 = 0.0;
	double d64_sum = 0.0;

	std::cout << "실수 5개를 입력하세요>>";
	std::cin >> d64_n1 >> d64_n2 >> d64_n3 >> d64_n4 >> d64_n5;

	if (d64_n1 > 0)
	{
		d64_sum += d64_n1;
	}
	
	if (d64_n2 > 0)
	{
		d64_sum += d64_n2;
	}

	if (d64_n3 > 0)
	{
		d64_sum += d64_n3;
	}

	if (d64_n4 > 0)
	{
		d64_sum += d64_n4;
	}

	if (d64_n5 > 0)
	{
		d64_sum += d64_n5;
	}

	std::cout << "양수 합은 " << d64_sum << "입니다." << std::endl;

	return 0;
}