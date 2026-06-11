#include "Coffee.h"

#include <iostream>

using namespace std;

int main() {
    Coffee espresso;                // 커피 10, 설탕 0, 우유 0, 물 0으로 만든 커피
    Coffee americano(5, 0, 0, 10);  // 커피 5, 물 10으로 만든 커피
    Coffee cappucchino(5, 1, 5, 2); // 커피 5, 설탕 1, 우유 5, 물 2로 만든 커피
    Coffee mySweet(3, 7, 5, 5);     // 커피 3, 설장 7, 우유 5, 물 5로 만든 커피

    espresso.show();
    cout << endl;
    mySweet.show();
}