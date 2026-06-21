#include "WordUtility.h"

#include <iostream>

int main(void)
{
    int32_t s32_n = WordUtility::wordCount("I love C++");       // 단어 개수 리턴
    std::cout << "단어 개수는 " << s32_n << std::endl;

    std::string o_word = WordUtility::getWord("I love C++", 3); // 3번째 단어 "C++" 리턴

    if (o_word == "")   // 해당 번째 단어가 없는 경우
    {
        std::cout << "3번째 단어는 없습니다." << std::endl;
    }
    else
    {
        std::cout << "3번째 단어는 " << o_word << std::endl;
    }

    return 0;
}