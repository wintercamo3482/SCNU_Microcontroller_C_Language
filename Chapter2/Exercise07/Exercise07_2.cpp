#include <iostream>
#include <string>

int main(void)
{
	std::string o_buf0;
    std::string o_buf1;

    std::cout << "문자열을 입력하세요>>";
    std::cin >> o_buf0;

    std::cout << "문자열을 입력하세요>>";
    std::cin >> o_buf1;

    if (o_buf0 == o_buf1)
    {
        std::cout << "Yes" << std::endl;
    }
    
    else
    {
        std::cout << "No" << std::endl;
    }

	return 0;
}