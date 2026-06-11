#ifndef COFFEEMACHINE_h
#define COFFEEMACHINE_h

#include <stdint.h>

class CoffeeMachine
{
private:
	int32_t ms32_coffee;
	int32_t ms32_water;
	int32_t ms32_sugar;

public:
	CoffeeMachine(int32_t s32_coffee, int32_t s32_water, int32_t s32_sugar);

	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	
	void fill();
	void show();
};

#endif /* #ifndef COFFEEMACHINE_h */