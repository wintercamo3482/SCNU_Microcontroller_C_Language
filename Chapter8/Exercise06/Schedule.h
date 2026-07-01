#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <stdint.h>

class Schedule
{
public:
    Schedule(int32_t s32_curloc, int32_t s32_n[], int32_t s32_count);
    ~Schedule();
    int32_t run();          // 도착 순서대로 택배 처리
    int32_t getJob();
    int32_t getCurLoc();

protected:
    int32_t ms32_count;     // mp32_s32_jobs[] 배열의 크기
    int32_t* mps32_jobs;    // 방문한 아파트 동 번호를 저장할 배열
    int32_t ms32_curLoc;    // 현재 택배 기사가 있는 동 번호
};

#endif /* SCHEDULE_H */