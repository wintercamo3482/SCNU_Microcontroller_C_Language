#include "Point3D.h"

int main(void)
{
	Point3D o_p(1, 2, 3);	// 1,2,3은 각각 x,y,z 축의 값
	o_p.show();				// (1,2,3)
	o_p.upZ();				// z 축으로 이동
	o_p.left();				// x 축으로 이동
	o_p.up();				// y 축으로 이동
	o_p.show();				// (0,3,4)
	o_p.set(10, 20, 30);
	o_p.show();				// (10,20,30)
	
	return 0;
}