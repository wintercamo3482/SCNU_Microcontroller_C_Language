#include "Collector.h"

#include <iostream>

double calcAvg(Collector o_collector)
{
	double d64_ret = 0.0;

	for (int32_t s32_i = 0; s32_i < o_collector.getSize(); s32_i++)
	{
		d64_ret += o_collector.get(s32_i);
	}

	d64_ret /= (double)o_collector.getSize();

	return d64_ret;
}

int main(void)
{
	int32_t as32_temp[] = { 69, 70, 71, 72, 74 };
	Collector o_weight(4, as32_temp);
	double d64_avg = calcAvg(o_weight);

	o_weight.show();

	std::cout << "평균은 " << d64_avg << std::endl;

	return 0;
}