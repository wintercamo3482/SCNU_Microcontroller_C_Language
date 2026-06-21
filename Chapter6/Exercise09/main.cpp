#include "Trace.h"

#include <iostream>

int32_t sumTo(int32_t s32_start, int32_t s32_end)
{
	Trace::put("sumTo()", "매개변수 start=" + std::to_string(s32_start));	// Trace에 디버깅 정보 저장
	Trace::put("sumTo()", "매개변수 end=" + std::to_string(s32_end));		// Trace에 디버깅 정보 저장
	
	int32_t s32_sum = 0;

	for (int32_t s32_i = s32_start; s32_i <= s32_end; s32_i++)
	{
		s32_sum += s32_i;
		Trace::put("sumTo()", "sum=" + std::to_string(s32_sum));	// 디버깅 정보 저장
	}

	return s32_sum;
}

int main(void)
{
	Trace::put("main()", "프로그램 시작");			// Trace에 디버깅 정보 저장
	
	int32_t s32_n = sumTo(1, 5);					// 1에서 5까지 더하기. s32_n은 15
	
	Trace::put("main()", "n=" + std::to_string(s32_n));	// Trace에 디버깅 정보 저장
	Trace::print("main()");							// "main()"태그의 디버깅 정보 모두 출력
	
	std::cout << std::endl;
	Trace::print();									// 모든 디버깅 정보 출력

	return 0;
}