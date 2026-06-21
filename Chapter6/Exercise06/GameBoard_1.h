#ifndef GAMEBOARD_1_H
#define GAMEBOARD_1_H

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

    void increase();
    void increase(int32_t s32_score);
    void increase(int32_t s32_score, std::string o_team);

    void show();
    void show(std::string o_team);
};

#endif /* GAMEBOARD_1_H */