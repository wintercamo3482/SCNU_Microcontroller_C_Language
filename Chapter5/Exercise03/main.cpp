#include "Bubble.h"

#include <iostream>

void addBubble(Bubble& ro_c, Bubble& ro_a, Bubble& ro_b)
{
	int32_t s32_radius = ro_c.getRadius() + ro_a.getRadius() + ro_b.getRadius();

	ro_c.setRadius(s32_radius);
}

int main(void)
{
	Bubble o_a(5);
	Bubble o_b(10);
	Bubble o_c(130);

	addBubble(o_c, o_a, o_b);	// 버블 c = c + a + b의 크기로 만들기
	std::cout << "버블 c의 반지름 " << o_c.getRadius() << std::endl;

	return 0;
}