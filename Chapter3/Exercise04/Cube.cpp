#include "Cube.h"

Cube::Cube(int32_t s32_width, int32_t s32_height, int32_t s32_depth)
{
	ms32_width = s32_width;
	ms32_height = s32_height;
	ms32_depth = s32_depth;
}

void Cube::increase(int32_t s32_width, int32_t s32_height, int32_t s32_depth)
{
	ms32_width += s32_width;
	ms32_height += s32_height;
	ms32_depth += s32_depth;
}

bool Cube::isZero()
{
	return getVolume() == 0;
}

int32_t Cube::getVolume()
{
	return ms32_width * ms32_height * ms32_depth;
}