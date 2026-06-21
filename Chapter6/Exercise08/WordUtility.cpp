#include "WordUtility.h"

WordUtility::WordUtility()
{}

int32_t WordUtility::wordCount(std::string o_text)
{
    int32_t s32_ret = 0;
    bool b1_is_word = false;

    for (int32_t s32_i = 0; s32_i < o_text.size(); s32_i++)
    {
        if (o_text[s32_i] != ' ')
        {
            if (b1_is_word == false)
            {
                s32_ret++;
                b1_is_word = true;
            }
        }
        else
        {
            b1_is_word = false;
        }
    }

    return s32_ret;
}

std::string WordUtility::getWord(std::string o_text, int32_t s32_index)
{
    std::string o_ret = "";
    
    bool b1_is_word = false;
    int32_t s32_count = 0;

    for (int32_t s32_i = 0; s32_i < o_text.size(); s32_i++)
    {
        if (o_text[s32_i] != ' ')
        {
            if (b1_is_word == false)
            {
                s32_count++;
                b1_is_word = true;
            }
            if (s32_count == s32_index)
            {
                o_ret += o_text[s32_i];
            }
        }
        else
        {
            if (s32_count == s32_index)
            {
                break;
            }

            b1_is_word = false;
        }
    }
    return o_ret;
}