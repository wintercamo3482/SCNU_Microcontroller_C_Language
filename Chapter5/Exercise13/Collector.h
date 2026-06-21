#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <stdint.h>

class Collector
{
private:
    int32_t* mps32_p;   // 데이터를 저장하는 동적 배열
    int32_t ms32_size;  // 데이터 개수

public:
    Collector(int32_t s32_size, int32_t as32_values[]); // 생성자
    Collector(const Collector& ro_src);                 // 복사 생성자
    ~Collector();                                       // 소멸자
    void show();                                        // 데이터 개수와 as32_value[]를 화면에 출력
    int32_t getSize() { return ms32_size; }
    int32_t get(int32_t s32_index) { return mps32_p[s32_index]; }
};

#endif /* COLLECTOR_H */