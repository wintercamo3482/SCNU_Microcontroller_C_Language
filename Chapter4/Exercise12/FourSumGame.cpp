#include "FourSumGame.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

FourSumGame::FourSumGame(int32_t s32_player_count)
{
    ms32_player_count = s32_player_count;
    mpo_players = new Player[ms32_player_count];
    
    srand((unsigned)time(0));
}

FourSumGame::~FourSumGame()
{
    delete[] mpo_players;
}

void FourSumGame::run()
{
    int32_t s32_turn = 0;
    int32_t s32_com = 0;
    int32_t s32_player_num = 0;
    int32_t s32_expect = 0;
    int32_t s32_result = 0;
    
    std::string o_name;

    std::cout << ms32_player_count << "명이 Four Sum 게임을 시작합니다." << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_player_count; s32_i++)
    {
        std::cout << "선수 이름>>";
        std::cin >> o_name;

        mpo_players[s32_i].SetName(o_name);
    }

    do
    {
        mpo_players[s32_turn].GetAnswer(s32_expect, s32_player_num);

        if (s32_expect < 0 || s32_expect > 4 ||
            s32_player_num < 0 || s32_player_num > 2)
        {
            std::cout << "잘못 입력하였습니다." << std::endl;
        }

        s32_com = rand() % 3;
        s32_result = s32_player_num + s32_com;

        std::cout << "예상 합 " << s32_expect << ", " << mpo_players[s32_turn].GetName() << " " << s32_player_num << ", 컴 " << s32_com << " : ";

        if (s32_result == s32_expect)
        {
            std::cout << mpo_players[s32_turn].GetName() << "님 승리!!" << std::endl;
            break;
        }
        else
        {
            std::cout << "실패!" << std::endl;
        }

        s32_turn++;

        if (s32_turn == ms32_player_count)
        {
            s32_turn = 0;
        }

    } while (true);
}