#include <stdint.h>
#include <iostream>

int32_t add(int32_t as32_arr[], int32_t s32_size)
{
	int32_t s32_ret = 0;

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		s32_ret += as32_arr[s32_i];
	}

	return s32_ret;
}

int32_t add(int32_t as32_arr[], int32_t s32_size, int32_t s32_init)
{
	int32_t s32_ret = s32_init;

	for (int32_t s32_i = 0; s32_i < s32_size; s32_i++)
	{
		s32_ret += as32_arr[s32_i];
	}

	return s32_ret;
}

int main(void)
{
	int32_t as32_a[] = { 1,2,3,4,5 };
	int32_t as32_b[] = { 6,7,8,9,10 };
	int32_t s32_c = add(as32_a, 5);			// 배열 as32_a의 정수를 모두 더한 값 리턴
	int32_t s32_d = add(as32_b, 3, s32_c);	// 배열 as32_b의 처음 3개와 s32_c를 더한 값 리턴

	std::cout << s32_c << std::endl;		// 1~5까지 합 = 15 출력
	std::cout << s32_d << std::endl;		// 6~8까지 합 + 15 = 36 출력

	return 0;
}