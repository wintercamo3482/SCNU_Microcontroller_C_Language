#include "Cappuccino.h"

int main(void)
{
	EspressoCoffee o_espresso("에스프레소", 2, 0);	// 물 없이 에스프레소만
	EspressoCoffee o_americano("아메리카노", 2, 5);	// 묽게
	o_americano.recipe();							// 아메리카노 조리법 출력

	Cappuccino o_myHotCap("따뜻한 카푸치노", 2, 2, 4, false);	// false는 따뜻한 의미
	o_myHotCap.recipe();										// 따뜻한 카푸치노 조리법 출력
	Cappuccino o_myIceCap("아이스카푸치노", 2, 1, 5, true);		// true는 아이스 의미
	o_myIceCap.recipe();										// 아이스카푸치노 조리법 출력

	return 0;
}