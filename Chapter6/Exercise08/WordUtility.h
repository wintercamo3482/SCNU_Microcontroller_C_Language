#ifndef WORDUTILITY_H
#define WORDUTILITY_H

#include <stdint.h>
#include <string>

class WordUtility
{
private:
    WordUtility();

public:
    static int32_t wordCount(std::string o_text);
    static std::string getWord(std::string o_text, int32_t s32_index);
};

#endif /* WORDUTILITY_H */