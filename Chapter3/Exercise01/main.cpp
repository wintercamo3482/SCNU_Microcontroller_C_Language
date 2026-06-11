#include "Picture.h"

#include <iostream>

using namespace std;

int main() {
    Picture pic;                   // 5x7 크기, 촬영 장소 "모름"
    Picture mt(10, 14, "한라산");  // 10x14 크기, 촬영 장소 "한라산"
    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
}