#include "CoffeeMachine.h"

#include <iostream>

CoffeeMachine::CoffeeMachine(int32_t s32_coffee, int32_t s32_water, int32_t s32_sugar)
{
	ms32_coffee = s32_coffee;
	ms32_water = s32_water;
	ms32_sugar = s32_sugar;
}

void CoffeeMachine::drinkEspresso()
{
	ms32_coffee -= 1;
	ms32_water -= 1;
}

void CoffeeMachine::drinkAmericano()
{
	ms32_coffee -= 1;
	ms32_water -= 2;
}

void CoffeeMachine::drinkSugarCoffee()
{
	ms32_coffee -= 1;
	ms32_water -= 2;
	ms32_sugar -= 1;
}

void CoffeeMachine::fill()
{
	ms32_coffee = 10;
	ms32_water = 10;
	ms32_sugar = 10;
}
void CoffeeMachine::show()
{
	std::cout << "[머신 상태] 커피:" << ms32_coffee << "\t물:" << ms32_water << "\t설탕:" << ms32_sugar << std::endl;
}	