#ifndef STACK_H
#define STACK_H

#include <stdint.h>

#define MAX_SIZE	100

class Stack
{
private:
	int32_t mas32_data[MAX_SIZE];
	int32_t ms32_tos;
	
public:
	Stack();

	Stack& operator<<(int32_t s32_n);
	Stack& operator>>(int32_t& rs32_n);
	bool operator!();
};

#endif /* STACK_H */