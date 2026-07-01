#include "Member.h"

#include <iostream>

Member::Member(std::string o_name, int32_t s32_point)
{
	mo_name = o_name;
	ms32_point = s32_point;
}

void Member::show()
{
	std::cout << "[" << mo_name << ", " << ms32_point << "]" << std::endl;
}

Member& Member::operator+=(int32_t s32_point)
{
	ms32_point += s32_point;
	return *this;
}