#include <iostream>
#include <cstring>

int main(void)
{
	char ac8_s[10], ac8_t[10];

	std::cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << std::endl;
	
	std::cout << "로미오>>";
	std::cin >> ac8_s;			// 로미오가 입력한 문자열

	std::cout << "줄리엣>>";
	std::cin >> ac8_t;			// 줄리엣이 입력한 문자열

	if (strcmp(ac8_s, ac8_t) == 0)
	{
		std::cout << "비겼습니다." << std::endl;
	}

	else if ((strcmp(ac8_s, "가위") == 0 && strcmp(ac8_t, "보") == 0) ||
			 (strcmp(ac8_s, "바위") == 0 && strcmp(ac8_t, "가위") == 0) ||
			 (strcmp(ac8_s, "보") == 0 && strcmp(ac8_t, "바위") == 0))
	{
		std::cout << "로미오가 이겼습니다." << std::endl;
	}

	else
	{
		std::cout << "줄리엣이 이겼습니다." << std::endl;
	}

	return 0;	
}