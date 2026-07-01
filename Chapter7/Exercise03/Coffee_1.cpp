#include "Coffee_1.h"

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

bool Coffee::operator!()
{
	bool b1_ret = (ms32_sugar == 0);

	return b1_ret;
}

bool Coffee::operator>(const Coffee& ro_other)
{
	bool b1_ret = false;

	int32_t s32_mine = ms32_water + ms32_espresso + ms32_sugar + ms32_cream;
	int32_t s32_other = ro_other.ms32_water + ro_other.ms32_espresso + ro_other.ms32_sugar + ro_other.ms32_cream;


	b1_ret = (s32_mine > s32_other);

	return b1_ret;
}