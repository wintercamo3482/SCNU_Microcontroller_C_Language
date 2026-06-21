#ifndef GAMEBOARD_2_H
#define GAMEBOARD_2_H

#include <stdint.h>
#include <string>

#define DEFAULT_SCORE   10

class GameBoard
{
private:
    int32_t ms32_blue;
    int32_t ms32_white;

public:
    GameBoard();

    void increase(int32_t s32_score = DEFAULT_SCORE, std::string o_team = "");
    void show(std::string o_team = "");
};

#endif /* GAMEBOARD_2_H */