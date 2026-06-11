#include "Storage.h"

#include <iostream>

using namespace std;

int main() {
    Storage a;
    a.put(36.7);    // 체온 36.7 저장
    a.put(36.9);    // 체온 36.9 저장
    a.put(36.4);    // 체온 36.4 저장
    a.dump();       // a에 저장된 모든 체온 값 출력
    cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
}