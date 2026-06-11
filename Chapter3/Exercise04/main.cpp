#include "Cube.h"

#include <iostream>

using namespace std;

int main() {
    Cube cube(1, 2, 3);     // 가로, 세로, 높이가 각각 1,2,3인 큐브 객체 생성
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    cube.increase(1, 2, 3); // 가로, 세로, 높이 각각 1,2,3 증가
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    if (cube.isZero()) cout << "큐브의 부피는 0" << endl;
    else cout << "큐브의 부피는 0이 아님" << endl;
}