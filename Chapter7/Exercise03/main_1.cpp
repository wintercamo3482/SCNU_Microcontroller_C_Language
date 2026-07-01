#include "Coffee_1.h"

#include <iostream>

int main()
{
	Coffee o_a(2, 5, 0, 0);
	Coffee o_b(2, 2, 2, 2);

	if (!o_a)	// 설탕이 없으면
	{
		std::cout << "No sugar!" << std::endl;
	}
	if (o_a > o_b)
	{
		std::cout << "커피 o_a가 양이 더 많아요.";
	}
	else
	{
		std::cout << "커피 o_b가 양이 더 많아요.";
	}

	return 0;
}