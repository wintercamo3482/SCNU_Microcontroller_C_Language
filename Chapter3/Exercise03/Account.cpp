#include "Account.h"

Account::Account(std::string o_name)
{
	mo_name = o_name;
	ms32_balance = 0;
}

void Account::deposit(int32_t s32_money)
{
	ms32_balance += s32_money;
}

int32_t Account::withdraw(int32_t s32_money)
{
	int32_t s32_ret = 0;
	
	if (s32_money <= ms32_balance)
	{
		ms32_balance -= s32_money;
		s32_ret = s32_money;
	}
	else
	{
		s32_ret = ms32_balance;
		ms32_balance = 0;
	}

	return s32_ret;
}

int32_t Account::inquiry()
{
	return ms32_balance;
}
std::string Account::getOwner()
{
	return mo_name;
}