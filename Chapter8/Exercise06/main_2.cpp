#include "ShortestFirst.h"

#include <iostream>

int main(void)
{
    int32_t as32_jobs[6];

    std::cout << "택배를 픽업할 동을 요청 순서대로 6개 입력>>";

    for (int32_t s32_i = 0; s32_i < 6; s32_i++)
    {
        std::cin >> as32_jobs[s32_i];       // 배달할 6개 동 번호 입력
    }

    Schedule o_fcfs(10, as32_jobs, 6);      // 현재 10동에 택배 기사 있음. 6은 as32_jobs 배열 크기
    
    std::cout << "전체 움직인 거리는 " << o_fcfs.run() << ", ";
    std::cout << "현재 위치는 " << o_fcfs.getCurLoc() << "동" << std::endl;

    ShortestFirst o_sf(10, as32_jobs, 6);   // 현재 10동에 택배 기사 있음. 6은 as32_jobs 배열 크기

    std::cout << "전체 움직인 거리는 " << o_sf.run() << ", ";
    std::cout << "현재 위치는 " << o_sf.getCurLoc() << "동" << std::endl;

    return 0;
}