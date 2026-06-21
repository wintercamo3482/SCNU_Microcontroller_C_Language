#ifndef BOARD_H
#define BOARD_H

#include <string>

#define POST_MAX    100

class Board
{
private:
    static std::string mao_post[POST_MAX];
    static int32_t ms32_count;
public:
    static void add(std::string o_text);
    static void print();
};

#endif /* BOARD_H */