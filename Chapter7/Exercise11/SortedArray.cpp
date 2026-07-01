#include "SortedArray.h"

#include <cstring>
#include <iostream>

SortedArray::SortedArray()
{
	ms32_size = 0;
	mps32_p = NULL;
}

SortedArray::SortedArray(const SortedArray& ro_src)
{
	ms32_size = ro_src.ms32_size;

	if (ms32_size > 0)
	{
		mps32_p = new int32_t[ms32_size];
		std::memcpy(mps32_p, ro_src.mps32_p, sizeof(int32_t) * ms32_size);
	}
	else
	{
		mps32_p = NULL;
	}
}

SortedArray::SortedArray(int32_t as32_p[], int32_t s32_size)
{
	ms32_size = s32_size;
	mps32_p = new int32_t[ms32_size];

	std::memcpy(mps32_p, as32_p, sizeof(int32_t) * ms32_size);
	sort();
}

SortedArray::~SortedArray()
{
	delete[] mps32_p;
}


void SortedArray::sort()
{
	int32_t s32_temp = 0;

	for (int32_t s32_i = 0; s32_i < ms32_size - 1; s32_i++)
	{
		for (int32_t s32_j = s32_i + 1; s32_j < ms32_size; s32_j++)
		{
			if (mps32_p[s32_i] > mps32_p[s32_j])
			{
				s32_temp = mps32_p[s32_i];
				mps32_p[s32_i] = mps32_p[s32_j];
				mps32_p[s32_j] = s32_temp;
			}
		}
	}
}

SortedArray SortedArray::operator+(const SortedArray& ro_op2)
{
	SortedArray o_ret;

	o_ret.ms32_size = ms32_size + ro_op2.ms32_size;
	o_ret.mps32_p = new int32_t[o_ret.ms32_size];

	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		o_ret.mps32_p[s32_i] = mps32_p[s32_i];
	}

	for (int32_t s32_i = 0; s32_i < ro_op2.ms32_size; s32_i++)
	{
		o_ret.mps32_p[ms32_size + s32_i] = ro_op2.mps32_p[s32_i];
	}

	o_ret.sort();

	return o_ret;
}


SortedArray SortedArray::operator=(const SortedArray& ro_op2)
{
	if (this != &ro_op2)
	{
		delete[] mps32_p;

		ms32_size = ro_op2.ms32_size;

		if (ms32_size > 0)
		{
			mps32_p = new int32_t[ms32_size];
			std::memcpy(mps32_p, ro_op2.mps32_p, sizeof(int32_t) * ms32_size);
		}
		else
		{
			mps32_p = NULL;
		}
	}

	return *this;
}

void SortedArray::show()
{
	std::cout << "배열 : ";

	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		std::cout << mps32_p[s32_i] << ' ';
	}
	std::cout << std::endl;
}