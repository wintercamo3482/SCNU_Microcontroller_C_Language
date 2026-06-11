#include "Oval.h"

#include <iostream>

using namespace std;

int main(void)
{
	Oval o_kitae, o_jane(10, 15);
	o_kitae.set(3, 4);	// kitae 타원 너비와 높이를 3x4로 변경
	o_kitae.show();		// kitae 타원의 모양 출력
	cout << o_jane.getWidth() << "x" << o_jane.getHeight() << ", 면적 " << o_jane.area() << endl;

	return 0;
}