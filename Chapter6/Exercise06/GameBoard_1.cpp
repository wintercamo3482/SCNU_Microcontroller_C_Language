#include "GameBoard_1.h"


#include <iostream>

GameBoard::GameBoard()
{
    ms32_blue = 0;
    ms32_white = 0;
}

void GameBoard::increase()
{
    ms32_blue += DEFAULT_SCORE;
    ms32_white += DEFAULT_SCORE;
}

void GameBoard::increase(int32_t s32_score)
{
    ms32_blue += s32_score;
    ms32_white += s32_score;
}

void GameBoard::increase(int32_t s32_score, std::string o_team)
{
    if (o_team == "청군")
    {
        ms32_blue += s32_score;
    }
    else if (o_team == "백군")
    {
        ms32_white += s32_score;
    }
}

void GameBoard::show()
{
    std::cout << "청군: " << ms32_blue << ", 백군: " << ms32_white << std::endl;
}

void GameBoard::show(std::string o_team)
{
    if (o_team == "청군")
    {
        std::cout << "청군: " << ms32_blue << std::endl;
    }
    else if (o_team == "백군")
    {
        std::cout << "백군: " << ms32_white << std::endl;
    }
}