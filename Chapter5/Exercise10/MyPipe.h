#ifndef MYPIPE_H
#define MYPIPE_H

#include <stdint.h>

#define MAX_NUMBER      5

class MyPipe
{
private:
    int32_t ms32_putIndex;          // 다음에 저장될 배열 원소의 인덱스. 초기값 0
    int32_t mas32_p[MAX_NUMBER];    // 저장 공간

public:
    MyPipe();
    bool put(int32_t s32_n);        // 배열이 꽉 찾으면 false 리턴. 아니면 s32_n을 배열에 저장하고 true 리턴
    bool get(int32_t& rs32_n);      // 배열이 비었으면 false 리턴. 아니면 mas32_p[0]을 s32_n에 저장하고 하나씩 자리 이동한 후 true 리턴
    int32_t getSize();              // 현재 저장된 정수의 개수 리턴
};

#endif /* MYPIPE_H */