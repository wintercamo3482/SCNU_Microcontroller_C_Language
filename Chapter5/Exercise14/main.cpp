#include "Contest.h"

#include <iostream>

int main(void)
{
    Contest o_codingTest(6);
    o_codingTest.read();    // 키보드에서 학생수만큼 팀 명과 점수 읽기. 동점 없음
    std::string o_team = decideGoldAward(o_codingTest);
    std::cout << "금상은 " << o_team << " 팀입니다." << std::endl;

    return 0;
}