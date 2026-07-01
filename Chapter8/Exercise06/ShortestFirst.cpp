#include "ShortestFirst.h"

#include <iostream>

ShortestFirst::ShortestFirst(int32_t s32_curloc, int32_t s32_n[], int32_t s32_count)
: Schedule(s32_curloc, s32_n, s32_count)
{}

int32_t ShortestFirst::run()
{
    int32_t s32_ret = 0;
    int32_t s32_min_index = 0;
    int32_t s32_min_distance = 0;
    int32_t s32_distance = 0;
    int32_t s32_temp = 0;

    std::cout << "현재 위치는 " << ms32_curLoc << "동: 배달 시작 ...";
    std::cout << ms32_curLoc;

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        s32_min_index = s32_i;
        s32_min_distance = abs(mps32_jobs[s32_i] - ms32_curLoc);

        for (int32_t s32_j = s32_i + 1; s32_j < ms32_count; s32_j++)
        {
            s32_distance = abs(mps32_jobs[s32_j] - ms32_curLoc);

            if (s32_distance < s32_min_distance)
            {
                s32_min_distance = s32_distance;
                s32_min_index = s32_j;
            }
        }

        s32_temp = mps32_jobs[s32_i];
        mps32_jobs[s32_i] = mps32_jobs[s32_min_index];
        mps32_jobs[s32_min_index] = s32_temp;

        s32_ret += abs(mps32_jobs[s32_i] - ms32_curLoc);
        ms32_curLoc = mps32_jobs[s32_i];

        std::cout << " -> " << ms32_curLoc;
    }
    std::cout << std::endl;

    return s32_ret;
}