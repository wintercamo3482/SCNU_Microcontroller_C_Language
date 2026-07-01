#include "Coffee_2.h"

int main(void)
{
	Coffee o_black(2, 5, 0, 0);
	Coffee o_dabang(2, 2, 2, 2);
	Coffee o_c;
	Coffee o_d;

	o_c = o_black + o_dabang;
	o_d = o_c + 1;				// 에스프레소 샷 1개 추가
	o_c.show();
	o_d.show();

	return 0;
}