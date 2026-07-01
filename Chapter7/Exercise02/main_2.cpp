#include "Coffee_2.h"

int main(void)
{
	Coffee o_black(2, 5, 0, 0);
	Coffee o_dabang(2, 2, 2, 2);

	o_black += o_dabang;	// o_black 커피에 o_badang 커피 합치기
	o_black += 1;			// o_black 커피에 에스프레소 1샷 추가
	o_black++;				// o_black 커피에 다시 에스프레소 1샷 추가
	o_black.show();

	return 0;
}