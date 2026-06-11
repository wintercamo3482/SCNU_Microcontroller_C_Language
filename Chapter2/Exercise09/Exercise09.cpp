#include <iostream>
#include <cstring>

int main()
{
	char ac8_buf[100];

	while (true)
	{
		std::cout << "끝내려면 OK를 입력하세요>>";
		std::cin.getline(ac8_buf, 100);

		if (strcmp(ac8_buf, "OK") == 0)
		{
			std::cout << "종료합니다." << std::endl;
			break;
		}
	}

	return 0;
}