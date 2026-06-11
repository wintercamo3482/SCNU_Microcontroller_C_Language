#include "WordGame.h"

#include <iostream>

WordGame::WordGame()
{
	mpo_players = nullptr;
	ms32_player_count = 0;
	mo_current_word = INIT_WORD;
}

WordGame::~WordGame()
{
	if (mpo_players != nullptr)
	{
		delete[] mpo_players;
	}
}

bool WordGame::CheckWord(std::string o_prev, std::string o_next)
{
	bool b1_ret = false;
	int32_t s32_prev = o_prev.size();

	if (o_prev.at(s32_prev - 2) == o_next.at(0) &&
		o_prev.at(s32_prev - 1) == o_next.at(1))
	{
		b1_ret = true;
	}

	return b1_ret;
}

void WordGame::Run()
{
	std::string o_name;
	std::string o_next_word;
	
	int32_t s32_turn = 0;

	std::cout << "끝말 잇기 게임을 시작합니다" << std::endl;
	std::cout << "게임에 참가하는 인원은 몇명입니까?";
	std::cin >> ms32_player_count;

	mpo_players = new Player[ms32_player_count];

	for (int32_t s32_i = 0; s32_i < ms32_player_count; s32_i++)
	{
		std::cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		std::cin >> o_name;
		
		mpo_players[s32_i].SetName(o_name);
	}
	std::cout << "시작하는 단어는 " << INIT_WORD << "입니다" << std::endl;

	do
	{
		o_next_word = mpo_players[s32_turn].SayWord();
		
		if (CheckWord(mo_current_word, o_next_word))
		{
			mo_current_word = o_next_word;
		}
		else
		{
			std::cout << mpo_players[s32_turn].GetName() << "이 패배했습니다" << std::endl;
			break;
		}
		
		s32_turn++;

		if (s32_turn == ms32_player_count)
		{
			s32_turn = 0;
		}

	} while (true);
}
