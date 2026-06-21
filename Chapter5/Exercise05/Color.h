#ifndef COLOR_H
#define COLOR_H

#include <stdint.h>

class Color
{
private:
    // 현재 색을 나타내는 red, green, blue의 성분 값들
    int32_t ms32_r;
    int32_t ms32_g;
    int32_t ms32_b;

public:
    Color(int32_t s32_r, int32_t s32_g, int32_t s32_b);          // 생성자
    void get(int32_t& rs32_r, int32_t& rs32_g, int32_t& rs32_b); // get() 멤버 함수
};

#endif /* COLOR_H */