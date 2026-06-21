#include "Vector_1.h"

#include <cstring>
#include <iostream>

Vector::Vector()
{
	ms32_size = DEFAULT_SIZE;
	mps32_mem = new int32_t[ms32_size];
	std::memset(mps32_mem, 0, sizeof(int32_t) * ms32_size);
}

Vector::Vector(int32_t s32_size, int32_t s32_value)
{
	ms32_size = s32_size;
	mps32_mem = new int32_t[ms32_size];

	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		mps32_mem[s32_i] = s32_value;
	}
}

Vector::~Vector()
{
	delete[] mps32_mem;
}

void Vector::show()
{
	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		std::cout << mps32_mem[s32_i] << ' ';
	}
	std::cout << std::endl;
}

void Vector::show(int32_t s32_count)
{
	for (int32_t s32_i = 0; s32_i < s32_count && s32_i < ms32_size; s32_i++)
	{
		std::cout << mps32_mem[s32_i] << ' ';
	}
	std::cout << std::endl;
}