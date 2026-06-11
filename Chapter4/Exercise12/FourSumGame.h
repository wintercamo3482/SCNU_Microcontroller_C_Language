#ifndef FOURSUMGAME_H
#define FOURSUMGAME_H

#include "Player.h"

class FourSumGame
{
private:
    Player* mpo_players;
    int32_t ms32_player_count;

public:
    FourSumGame(int32_t s32_player_count);
    ~FourSumGame();

    void run();
};

#endif /* FOURSUMGAME_H */