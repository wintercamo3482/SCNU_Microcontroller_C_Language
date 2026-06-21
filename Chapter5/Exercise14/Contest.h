#ifndef CONTEST_H
#define CONTEST_H

#include <stdint.h>
#include <string>

class Contest
{
private:
    std::string* mpo_teams; // 팀명 배열
    int32_t* mps32_scores;  // 팀별 점수 배열. 동점 없음
    int32_t ms32_size;           // 팀의 개수

public:
    Contest(int32_t s32_size);      // 생성자. s32_size 만큼 mpo_teams와 mps32_scores에 동적 메모리 할당
    Contest(const Contest& ro_src); // 복사 생성자
    ~Contest();                     // 소멸자. 할당받은 동적 메모리 반환
    void read();                    // 팀 수만큼 키보드로부터 팀명과 점수 입력
    int32_t getSize() { return ms32_size; }
    int32_t getScore(int32_t s32_index) { return mps32_scores[s32_index]; }
    std::string getTeam(int32_t s32_index) { return mpo_teams[s32_index]; }
};

// codingTest 객체로부터 함수 원형. 최고의 점수를 가진 팀 명 리턴
std::string decideGoldAward(Contest o_codingTest);

#endif /* CONTEST_H */