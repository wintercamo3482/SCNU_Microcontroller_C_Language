#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member
{
public:
    Member(std::string o_name, int32_t s32_ratio = 1);

    void earn(int32_t s32_pay);     // pay 금액을 사용한 경우 포인트 적립
    int32_t getPoint();             // 현재 포인트 리턴
    void show();                    // 이름과 포인트 출력
    
protected:
    std::string mo_name;    // 회원 명
    int32_t ms32_point;     // 초기 포인트 0
    int32_t ms32_ratio;     // 포인트 적립률. 단위: %
};

#endif /* MEMBER_H */