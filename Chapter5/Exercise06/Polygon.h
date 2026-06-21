#ifndef POLYGON_H
#define POLYGON_H

#include <stdint.h>

class Polygon
{
    int32_t ms32_size = 0;  //점의 개수. 초기 값 0

    //점들의 x와 y값 배열
    int32_t* mps32_xList = NULL;
    int32_t* mps32_yList = NULL;

public:
    Polygon(int32_t s32_size);  // 생성자. s32_size는 점의 개수
    ~Polygon();
    void read();                                                // read() 멤버 함수
    bool get(int32_t s32_n, int32_t& rs32_x, int32_t& rs32_y);  // get() 멤버 함수
};

#endif /* POLYGON_H */