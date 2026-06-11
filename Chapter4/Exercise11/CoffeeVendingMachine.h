#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H

#include "Container.h"

#define MENU_NUM    3

class CoffeeVendingMachine  // 커피 자판기를 표현하는 클래스
{
//private:
    Container mao_tong[3];  // mao_tong[0]은 커피, mao_tong[1]은 물, mao_tong[2]는 설탕통을 나타냄
    void fill();            // 3개의 통을 모두 10으로 채움
    void getEspresso();     // 에스프레소를 선택한 경우, 커피 1, 물 1 소모
    void getAmericano();    // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
    void getSugarCoffee();  // 설탕커피를 선택한 경우, 커피 1, 물 2, 설탕 1 소모
    void show();            // 현재 커피, 물, 설탕의 잔량 출력

public:
    void run();             // 커피 자판기 작동
};

#endif /* COFFEEVENDINGMACHINE_H */