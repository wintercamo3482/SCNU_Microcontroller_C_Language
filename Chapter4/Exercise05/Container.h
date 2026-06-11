#ifndef CONTAINER_H
#define CONTAINER_H

#include <stdint.h>

class Container
{
    int32_t* mps32_p;   // 정수 배열에 대한 포인터
    int32_t ms32_size;  // 정수 배열의 크기
public:
    Container(int32_t s32_size);    // 생성자
    ~Container();                   // 소멸자
    void read();                    // 배열의 크기만큼 정수를 키보드로부터 읽어들이기
    void write();                   // 배열에 저장된 전체 정수 출력
    void rotate();                  // 배열의 원소들을 오른쪽으로 회전
    double avg();                   // 평균 출력
};

#endif /* CONTAINER_H */