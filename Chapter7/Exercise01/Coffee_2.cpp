#include "Coffee_2.h"

#include <iostream>

Coffee::Coffee(int32_t s32_water, int32_t s32_coffee, int32_t s32_sugar, int32_t s32_cream)
{
	this->ms32_water = s32_water;
	this->ms32_espresso = s32_coffee;
	this->ms32_sugar = s32_sugar;
	this->ms32_cream = s32_cream;
}

void Coffee::show()
{
	std::cout << "물 " << ms32_water << ", 커피 " << ms32_espresso;
	std::cout << ", 설탕 " << ms32_sugar << ", 크림 " << ms32_cream << std::endl;
}

Coffee operator+(const Coffee& ro_left, const Coffee& ro_right)
{
	Coffee o_ret(ro_left.ms32_water + ro_right.ms32_water,
				 ro_left.ms32_espresso + ro_right.ms32_espresso,
				 ro_left.ms32_sugar + ro_right.ms32_sugar,
				 ro_left.ms32_cream + ro_right.ms32_cream);

	return o_ret;
}

Coffee operator+(const Coffee& ro_left, int32_t s32_shot)
{
	Coffee o_ret(ro_left.ms32_water,
 				 ro_left.ms32_espresso + s32_shot,
				 ro_left.ms32_sugar,
				 ro_left.ms32_cream);

	return o_ret;
}