#include "AirlineBook.h"
#include "Console.h"

#include <iostream>

AirlineBook::AirlineBook()
{
	mao_schedule[0] = Schedule("07시");
	mao_schedule[1] = Schedule("12시");
	mao_schedule[2] = Schedule("17시");
}

void AirlineBook::Run()
{
	int32_t s32_menu = 0;

	std::cout << "*****" << AIRLINE_NAME << "에 오신것을 환영합니다 *****" << std::endl;

	do
	{
		s32_menu = Console::GetMenu();

		if (s32_menu == 1)
		{
			Reserve();
		}
		else if (s32_menu == 2)
		{
			Cancel();
		}
		else if (s32_menu == 3)
		{
			Show();
		}
		else if (s32_menu == 4)
		{
			std::cout << "예약 시스템을 종료합니다." << std::endl;
			break;
		}	

	} while (true);
}

void AirlineBook::Reserve()
{
	int32_t s32_time = Console::GetTime();
	int32_t s32_seat_no = 0;
	std::string o_name;

	mao_schedule[s32_time - 1].Show();
	s32_seat_no = Console::GetSeatNO();
	o_name = Console::GetName();

	mao_schedule[s32_time - 1].Reserve(s32_seat_no, o_name);
}

void AirlineBook::Cancel()
{
	int32_t s32_time = Console::GetTime();
	int32_t s32_seat_no = 0;
	std::string o_name;

	mao_schedule[s32_time - 1].Show();
	s32_seat_no = Console::GetSeatNO();
	o_name = Console::GetName();

	mao_schedule[s32_time - 1].Cancel(s32_seat_no, o_name);
}

void AirlineBook::Show()
{
	for (int32_t s32_i = 0; s32_i < AIRLINE_SCHEDULE; s32_i++)
	{
		mao_schedule[s32_i].Show();
	}
}