#ifndef MYPIPE_H
#define MYPIPE_H

#include <stdint.h>

class MyPipe
{
    int32_t ms32_size;      // 할당된 동적 배열의 크기
    int32_t ms32_putIndex;  // 다음에 저장될 배열 원소의 인덱스. 초기값 0
    int32_t* ps32_p;        // 정수를 저장할 동적 배열을 가리키는 포인터

public:
    MyPipe();
    MyPipe(int32_t s32_size);
    MyPipe(const MyPipe& ro_src);  // 복사 생성자
    ~MyPipe();                  // 소멸자
    bool put(int32_t s32_n);
    bool get(int32_t& rs32_n);
    int32_t getSize() { return ms32_putIndex; }
};

#endif /* MYPIPE_H */