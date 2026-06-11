#ifndef WORDGAME_H
#define WORDGAME_H

#include "Player.h"

//#include <string>
#include <stdint.h>

#define INIT_WORD	"¾Æ¹öÁö"

class WordGame
{
private:
	Player* mpo_players;
	int32_t ms32_player_count;
	std::string mo_current_word;

	bool CheckWord(std::string o_prev, std::string o_next);

public:
	WordGame();
	~WordGame();
	
	void Run();
};

#endif /* WORDGAME_H */