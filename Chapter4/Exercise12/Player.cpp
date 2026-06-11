#include "Player.h"

#include <iostream>

Player::Player()
{
    mo_name = "";
}

std::string Player::GetName()
{
    return mo_name;
}

void Player::SetName(std::string o_name)
{
    mo_name = o_name;
}

void Player::GetAnswer(int32_t& rs32_sum, int32_t& rs32_num)
{
    std::cout << mo_name << "님, 예상 합과 수 입력하세요>>";
    std::cin >> rs32_sum >> rs32_num;
}