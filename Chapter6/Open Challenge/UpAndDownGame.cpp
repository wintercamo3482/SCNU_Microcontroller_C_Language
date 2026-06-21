#include "UpAndDownGame.h"

#include <iostream>
#include <ctime>
#include <cstdlib>

int32_t UpAndDownGame::ms32_answer = 0;

int32_t UpAndDownGame::ms32_low = ANSWER_MIN;

int32_t UpAndDownGame::ms32_high = ANSWER_MAX;

Person UpAndDownGame::mao_person[2] =
{
    Person("제인"),
    Person("수희")
};

void UpAndDownGame::Run()
{
    int32_t s32_turn = 0;
    int32_t s32_guess = 0;

    srand((unsigned)time(0));
    
    ms32_answer = rand() % 100;
    ms32_low = ANSWER_MIN;
    ms32_high = ANSWER_MAX;

    std::cout << "Up & Down 게임을 시작합니다." << std::endl;
    
    do
    {
        std::cout << "답은 " << ms32_low << "과 " << ms32_high << "사이에 있습니다." << std::endl;

        s32_guess = mao_person[s32_turn].Guess();

        if (s32_guess == ms32_answer)
        {
            std::cout << mao_person[s32_turn].GetName() << "이 이겼습니다!!" << std::endl;
            break;
        }
        if (s32_guess > ms32_answer)
        {
            ms32_high = s32_guess;
        }
        else
        {
            ms32_low = s32_guess;
        }

        s32_turn = (s32_turn + 1) % 2;

    } while (true);
}