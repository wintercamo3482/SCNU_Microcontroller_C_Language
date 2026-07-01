#ifndef AIRLINEBOOK_H
#define AIRLINEBOOK_H

#define AIRLINE_NAME		"한성항공"
#define AIRLINE_SCHEDULE	3

#include "Schedule.h"

class AirlineBook
{
public:
	AirlineBook();

	void Run();

private:
	void Reserve();
	void Cancel();
	void Show();

private:
	Schedule mao_schedule[AIRLINE_SCHEDULE];
};

#endif /* AIRLINEBOOK_H */