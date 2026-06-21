#ifndef RANDOM_H
#define RANDOM_H

#include <ctime>
#include <cstdlib>
#include <stdint.h>

#define RAND_MIN        0
#define RAND_MAX        32767
#define ALPHABET_NUM    26

class Random
{
private:
    Random() {} // private 속성 생성자

public:
    // seed()는 다른 랜덤수를 발생시키기 위한 초기화(seed 설정) 함수
    static void seed() { srand((unsigned)time(0)); }                                // 시드 설정
    static int32_t nextInt(int32_t s32_min = RAND_MIN, int32_t s32_max = RAND_MAX); // s32_min과 s32_max 사이의 랜덤 정수 리턴

    static char nextAlphabet(); // 랜덤하게 알파벳 문자 리턴
    static double nextDouble(); // 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
};

#endif /* RANDOM_H */