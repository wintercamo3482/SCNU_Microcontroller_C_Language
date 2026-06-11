#include "Player.h"

#include <iostream>

Player::Player()
{
	mo_name = "Default_Name";
}

Player::Player(std::string o_name)
{
	mo_name = o_name;
}

void Player::SetName(std::string o_name)
{
	mo_name = o_name;
}

std::string Player::GetName()
{
	return mo_name;
}

std::string Player::SayWord()
{
	std::string mo_ret;

	std::cout << mo_name << ">>";
	std::cin >> mo_ret;

	return mo_ret;
}