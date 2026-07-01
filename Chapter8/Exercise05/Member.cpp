#include "Member.h"

#include <iostream>

Member::Member(std::string o_name, int32_t s32_ratio)
: mo_name(o_name)
, ms32_ratio(s32_ratio)
, ms32_point(0)
{}

void Member::earn(int32_t s32_pay)
{
	ms32_point += s32_pay * ms32_ratio / 100;
}

int32_t Member::getPoint()
{
	return ms32_point;
}

void Member::show()
{
	std::cout << mo_name << "의 포인트 " << ms32_point << std::endl;
}