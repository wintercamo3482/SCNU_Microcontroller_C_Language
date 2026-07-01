#include "ArithCPU.h"

#include <iostream>

ArithCPU::ArithCPU(int32_t s32_val)
: PrimitiveCPU(s32_val)
{}

void ArithCPU::sub(int32_t s32_b)
{
	add(-s32_b);
}

void ArithCPU::mul(int32_t s32_b)
{
	int32_t s32_orig = read();

	load(0);

	for (int32_t s32_i = 0; s32_i < s32_b; s32_i++)
	{
		add(s32_orig);
	}
}

void ArithCPU::div(int32_t s32_b)
{
	int32_t s32_count = 0;

	while (read() >= s32_b)
	{
		sub(s32_b);
		s32_count++;
	}

	load(s32_count);
}

void ArithCPU::execute(std::string o_cmd, int32_t s32_operand)
{
	if (o_cmd == "load")
	{
		load(s32_operand);
	}
	else if (o_cmd == "add")
	{
		add(s32_operand);
	}
	else if (o_cmd == "sub")
	{
		sub(s32_operand);
	}
	else if (o_cmd == "mul")
	{
		mul(s32_operand);
	}
	else if (o_cmd == "div")
	{
		div(s32_operand);
	}
	else if (o_cmd == "prt")
	{
		std::cout << "ms32_acc=" << read() << std::endl;
	}
}

void ArithCPU::run()
{
	std::string o_cmd;
	int32_t s32_operand = 0;

	std::cout << "실행 시작합니다. 명령을 입력하세요..." << std::endl;

	do
	{
		std::cout << ">>";
		std::cin >> o_cmd;
		
		if (o_cmd == "stop")
		{
			std::cout << "실행을 종료합니다." << std::endl;
			break;
		}
		
		if (o_cmd == "prt")
		{
			execute(o_cmd);
		}
		else
		{
			std::cin >> s32_operand;
			execute(o_cmd, s32_operand);
		}

	} while (true);
}