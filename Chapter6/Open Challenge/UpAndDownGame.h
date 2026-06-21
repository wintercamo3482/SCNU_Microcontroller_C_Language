#ifndef UPANDDOWNGAME_H
#define UPANDDOWNGAME_H

#include "Person.h"

#define ANSWER_MIN  0
#define ANSWER_MAX  99

class UpAndDownGame
{
private:
    static int32_t ms32_answer;
    static int32_t ms32_low;
    static int32_t ms32_high;
    static Person mao_person[2];

public:
    static void Run();
};

#endif /* UPANDDOWNGAME_H */