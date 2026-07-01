#include "Schedule.h"

#include <iostream>

Schedule::Schedule(std::string o_time)
: mo_time(o_time)
{}

void Schedule::Reserve(int32_t s32_seat_no, std::string o_name)
{
	mao_seat[s32_seat_no - 1].Reserve(o_name);
}
void Schedule::Cancel(int32_t s32_seat_no, std::string o_name)
{
	mao_seat[s32_seat_no - 1].Cancel(o_name);
}

void Schedule::Show()
{
	std::cout << mo_time << ":";

	for (int32_t s32_i = 0; s32_i < SEAT_NUM; s32_i++)
	{
		mao_seat[s32_i].Show();
	}
	std::cout << std::endl;
}