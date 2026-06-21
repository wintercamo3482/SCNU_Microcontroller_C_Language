#include "Board.h"

#include <iostream>

std::string Board::mao_post[POST_MAX];
int32_t Board::ms32_count = 0;

void Board::add(std::string o_text)
{
    if (ms32_count < POST_MAX)
    {
        mao_post[ms32_count++] = o_text;
    }
}

void Board::print()
{
    std::cout << "************* 게시판입니다.(" << ms32_count << ") *************" << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        std::cout << s32_i + 1 << ": " << mao_post[s32_i] << std::endl;
    }
    std::cout << "********************************************" << std::endl;
}