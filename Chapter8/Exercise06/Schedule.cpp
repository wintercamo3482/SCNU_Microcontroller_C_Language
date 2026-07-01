#include "Schedule.h"

#include <iostream>

Schedule::Schedule(int32_t s32_curloc, int32_t s32_n[], int32_t s32_count)
{
    ms32_curLoc = s32_curloc;
    ms32_count = s32_count;
    
    mps32_jobs = new int32_t[ms32_count];
    
    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        mps32_jobs[s32_i] = s32_n[s32_i];
    }
}

Schedule::~Schedule()
{
    delete[] mps32_jobs;
}

int32_t Schedule::run()
{
    int32_t s32_ret = 0;
    
    int32_t s32_next = 0;

    std::cout << "현재 위치는 " << ms32_curLoc << "동: 배달 시작 ...";
    std::cout << ms32_curLoc;

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        s32_next = mps32_jobs[s32_i];

        s32_ret += abs(s32_next - ms32_curLoc);
        ms32_curLoc = s32_next;
        
        std::cout << " -> " << ms32_curLoc;
    }

    std::cout << std::endl;

    return s32_ret;
}

int32_t Schedule::getJob()
{
    return ms32_count;
}

int32_t Schedule::getCurLoc()
{
    return ms32_curLoc;
}