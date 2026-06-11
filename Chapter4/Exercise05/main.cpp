#include "Container.h"

#include <iostream>

using namespace std;

int main(void)
{
    Container o_c(10);  // 정수 10개를 저장할 객체 c 생성
    o_c.read();         // 키보드에서 정수 배열로 읽어 들이기
    o_c.write();        // 정수 배열 출력
    o_c.rotate();       // 정수 배열을 오른쪽으로 회전
    o_c.write();        // 정수 배열 출력
    cout << "평균은 " << o_c.avg() << endl;
    
    return 0;
}