#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Seat.h"

#define SEAT_NUM	8

class Schedule
{
public:
	Schedule(std::string o_time = "");

	void Reserve(int32_t s32_seat_no, std::string o_name);
	void Cancel(int32_t s32_seat_no, std::string o_name);

	void Show();

private:
	std::string mo_time;
	Seat mao_seat[SEAT_NUM];
};

#endif /* SCHEDULE_H */