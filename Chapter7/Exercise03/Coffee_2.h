#ifndef COFFEE_2_H
#define COFFEE_2_H

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

	friend bool operator!(const Coffee& ro_obj);
	friend bool operator>(const Coffee& ro_left, const Coffee& ro_right);
};

#endif /* COFFEE_2_H */