#include "Color.h"

Color::Color(int32_t s32_r, int32_t s32_g, int32_t s32_b)
{
	ms32_r = s32_r;
	ms32_g = s32_g;
	ms32_b = s32_b;
}

void Color::get(int32_t& rs32_r, int32_t& rs32_g, int32_t& rs32_b)
{
	rs32_r = ms32_r;
	rs32_g = ms32_g;
	rs32_b = ms32_b;
}