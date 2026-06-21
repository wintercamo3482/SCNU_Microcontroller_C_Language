#include "Contest.h"

#include <iostream>

Contest::Contest(int32_t s32_size)
{
    ms32_size = s32_size;

    mpo_teams = new std::string[ms32_size];
    mps32_scores = new int32_t[ms32_size];
    std::memset(mps32_scores, 0, sizeof(int32_t) * ms32_size);
}

Contest::Contest(const Contest& ro_src)
{
    ms32_size = ro_src.ms32_size;

    mpo_teams = new std::string[ms32_size];
    mps32_scores = new int32_t[ms32_size];

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        mpo_teams[s32_i] = ro_src.mpo_teams[s32_i];
    }

    std::memcpy(mps32_scores, ro_src.mps32_scores, sizeof(int32_t) * ms32_size);
}

Contest::~Contest()
{
    delete[] mpo_teams;
    delete[] mps32_scores;
}

void Contest::read()
{
    std::cout << ms32_size << "개 입력>>";

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        std::cin >> mpo_teams[s32_i] >> mps32_scores[s32_i];
    }
}

std::string decideGoldAward(Contest o_codingTest)
{
    std::string o_ret = "";
    int32_t s32_max_idx = 0;

    for (int32_t s32_i = 0; s32_i < o_codingTest.getSize(); s32_i++)
    {
        if (o_codingTest.getScore(s32_i) > o_codingTest.getScore(s32_max_idx))
        {
            s32_max_idx = s32_i;
        }
    }

    o_ret = o_codingTest.getTeam(s32_max_idx);

    return o_ret;
}