#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
	std::string mo_name;

public:
	Player();
	Player(std::string o_name);

	void SetName(std::string o_name);
	std::string GetName();
	std::string SayWord();
};

#endif /* PLAYER_H */