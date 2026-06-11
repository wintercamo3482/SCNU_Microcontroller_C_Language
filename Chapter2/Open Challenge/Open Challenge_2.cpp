#include <iostream>
#include <string>

int main(void)
{
	std::string o_s, o_t;

	std::cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << std::endl;

	std::cout << "로미오>>";
	std::cin >> o_s;			// 로미오가 입력한 문자열

	std::cout << "줄리엣>>";
	std::cin >> o_t;			// 줄리엣이 입력한 문자열

	if (o_s == o_t)
	{
		std::cout << "비겼습니다." << std::endl;
	}

	else if ((o_s == "가위" && o_t == "보") ||
			 (o_s == "바위" && o_t == "가위") ||
			 (o_s == "보" && o_t == "바위"))
	{
		std::cout << "로미오가 이겼습니다." << std::endl;
	}
	else
	{
		std::cout << "줄리엣이 이겼습니다." << std::endl;
	}

	return 0;
}