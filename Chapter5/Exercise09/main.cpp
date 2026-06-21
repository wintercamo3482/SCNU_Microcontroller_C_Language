#include "MyStack.h"

#include <iostream>

int main(void)
{
	MyStack o_st;

	for (int32_t s32_i = 0; s32_i < MAX_NUMBER + 1; s32_i++)	// 11개의 정수 푸시
	{
		if (o_st.push(s32_i))
		{
			std::cout << s32_i << ' ';							// 푸시된 값 화면 출력
		}
		else
		{
			std::cout << std::endl << s32_i + 1 << "번째 푸시 실패! 스택 차 있음" << std::endl;
		}
	}
	
	int32_t s32_n = 0;

	for (int32_t s32_i = 0; s32_i < MAX_NUMBER + 1; s32_i++)	// 11번의 정수 팝
	{
		if (o_st.pop(s32_n))
		{
			std::cout << s32_n << ' ';							// 팝으로 받아온 값 출력
		}
		else
		{
			std::cout << std::endl << s32_i + 1 << "번째 팝 실패! 스택이 비어 있음" << std::endl;
		}
	}

	return 0;
}
