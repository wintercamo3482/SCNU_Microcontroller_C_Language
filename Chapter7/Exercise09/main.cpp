#include "Chart.h"

#include <iostream>

int main()
{
	Chart o_chart(100);		// 100개의 정수 저장이 가능한 차트 객체
	
	if (!o_chart)
	{
		std::cout << "차트가 비었습니다." << std::endl;
	}

	int32_t s32_n;

	std::cout << "정수 4개 입력>>";

	for (int32_t s32_i = 0; s32_i < 4; s32_i++)
	{
		std::cin >> s32_n;	// 정수 입력
		o_chart << s32_n;	// o_chart에 입력받은 정수 저장
	}
	
	int32_t s32_avg = ~o_chart;	// o_chart 데이터의 평균 값 리턴

	std::cout << "평균은 " << s32_avg << std::endl;

	o_chart.show();			// 현재 저장된 차트 데이터 출력
}