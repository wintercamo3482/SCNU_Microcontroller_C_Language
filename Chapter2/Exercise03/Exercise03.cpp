#include <iostream>

int main(void)
{
    int32_t s32_num = 0;
    int32_t s32_ten = 0;

    std::cout << "정수를 입력하세요>>";
    std::cin >> s32_num;
    
    s32_ten = (s32_num % 100) / 10;

    std::cout << s32_num << "의 10자리 수는 " << s32_ten << "입니다." << std::endl;

    return 0;
}