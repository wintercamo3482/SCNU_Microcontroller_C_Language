#include "Container.h"

void Container::fill(int32_t s32_n)
{
	ms32_size += s32_n;
	
	if (ms32_size > MAX_CONTAIN)
	{
		ms32_size = MAX_CONTAIN;
	}
}

bool Container::consume(int32_t s32_n)
{
	bool b1_ret = false;

	if (ms32_size >= s32_n)
	{
		ms32_size -= s32_n;
		b1_ret = true;
	}

	return b1_ret;
}
int32_t Container::getSize()
{
	return ms32_size;
}