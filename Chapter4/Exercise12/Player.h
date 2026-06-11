#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <stdint.h>

class Player
{
private:
    std::string mo_name;

public:
    Player();

    std::string GetName();
    void SetName(std::string o_name);

    void GetAnswer(int32_t& rs32_sum, int32_t& rs32_num);
};

#endif /* PLAYER_H */