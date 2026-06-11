#ifndef PIPE_H
#define PIPE_H

#include <stdint.h>

class Pipe
{
private:
    int32_t mas32_data[10];  // 파이프 내 저장 공간
    int32_t ms32_index;      // 도착하는 정수를 저장할 위치를 나타내는 data [] 배열의 인덱스

public:
    Pipe();                         // 생성자. data[] 배열을 0으로. index를 0으로 초기화

    int32_t arrive(int32_t s32_n);  // 파이프 맨 뒤에 n 삽입. 꽉 차 있으면 저장된 정수들을 앞으로 이동시키고 맨 앞의 수(as32_data[0])를 제거하여 리턴. 꽈차 있지 않으면 -1 리턴
    int32_t shift();                // 파이프 내 정수들을 앞으로 한 자리씩 이동. 맨 앞의 수(as32_data[0])를 제거하여 리턴. as32_data[9]에는 0 삽입
    void show();                    // 파이프 내 정수들을 모두 출력
};

#endif /* PIPE_H */