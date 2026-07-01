#include "MyQueue.h"

#include <iostream>

int main(void)
{
	MyQueue o_m;
	int32_t s32_n = 0;

	std::cout << "큐에 저장할 5개의 정수 입력>>";

	for (int32_t s32_i = 0; s32_i < 5; s32_i++)
	{
		std::cin >> s32_n;		// 접수 입력
		o_m.enqueue(s32_n);		// 큐에 정수 저장
	}
	
	std::cout << "큐 용량:" << o_m.getCapacity() << ", 큐 크기:" << o_m.length() << std::endl;
	std::cout << "큐의 모든 정수를 순서대로 제거하고 출력...";

	while (o_m.length() != 0)
	{
		std::cout << o_m.dequeue() << ' ';	// 큐의 맨 앞의 정수를 제거하여 출력
	}

	std::cout << std::endl;
	std::cout << "큐 용량:" << o_m.getCapacity() << ", 큐 크기:" << o_m.length() << std::endl;

	return 0;
}