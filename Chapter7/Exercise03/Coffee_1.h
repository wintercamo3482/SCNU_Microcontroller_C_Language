#ifndef COFFEE_1_H
#define COFFEE_1_H

#include <stdint.h>

class Coffee
{
private:
	int32_t ms32_water;
	int32_t ms32_espresso;
	int32_t ms32_sugar;
	int32_t ms32_cream;

public:
	Coffee(int32_t s32_water = 1, int32_t s32_coffee = 1, int32_t s32_sugar = 0, int32_t s32_cream = 0);
	void show();

	bool operator!();
	bool operator>(const Coffee& ro_other);
};

#endif /* COFFEE_1_H */