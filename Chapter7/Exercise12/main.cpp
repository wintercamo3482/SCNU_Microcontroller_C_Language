#include "MemberManager.h"

#include <iostream>

int main(void)
{
    MemberManager o_man;
    std::string o_name;

    for (int32_t s32_i = 0; s32_i < 3; s32_i++)
    {
        std::cout << "신규 회원 이름>>";
        std::cin >> o_name;                 // 고객 이름 입력
        o_man << Member(o_name);            // << 연산자로 신규 회원 저장. 포인트는 100으로 초기화
    }
    
    for (int32_t s32_i = 0; s32_i < 3; s32_i++)
    {
        o_man[s32_i].show();                // 처음 3명의 회원 정보 출력
    }
    
    o_man[2] += 500;                        // 3번째 회원의 포인트 500 점 증가
    Member& ro_c = o_man[1];                // 회원 ro_c는 2번째 저장된 회원(Member) 객체
    ro_c += 200;                            // 회원 ro_c의 포인트 200점 증가

    for (int32_t s32_i = 0; s32_i < 3; s32_i++)
    {
        o_man[s32_i].show();                // 처음 3명의 회원 정보 출력
    }
    
    return 0;
}