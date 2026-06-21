#include "Fitness.h"

#include <iostream>

int main(void)
{
    Fitness o_altong;
    o_altong.arrive("남", 3).arrive("여", 6).arrive("남", 9);  // 남자회원수 12, 여자 회원수 6
        
    int32_t s32_m = 0;
    int32_t s32_w = 0;
    o_altong.count("남", s32_m); // s32_m에 남자 회원 수 얻어오기
    o_altong.count("여", s32_w); // s32_m에 여자 회원 수 얻어오기
    std::cout << "남자 회원 " << s32_m << "명, 여자 회원 " << s32_w << "명" << std::endl;

    o_altong.at("남") = 100; // 남자 회원 수를 100으로 설정
    s32_m = o_altong.at("남") = 100; // 남자 회원 수를 s32_m에 저장
    s32_w = o_altong.at("여") = 100; // 여자 회원 수를 s32_m에 저장
    std::cout << "남자 회원 " << s32_m << "명, 여자 회원 " << s32_w << "명" << std::endl;

	return 0;
}