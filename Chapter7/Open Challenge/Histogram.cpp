#include "Histogram.h"

#include <iostream>
#include <cstring>

Histogram::Histogram(std::string o_text)
{
    mo_text = o_text;
}

Histogram& Histogram::operator<<(std::string o_text)
{
    mo_text += o_text;

    return *this;
}

Histogram& Histogram::operator<<(char c8_ch)
{
    mo_text += c8_ch;

    return *this;
}

void Histogram::operator!()
{
    char c8_ch;

    int32_t s32_total = 0;
    int32_t as32_count[ALPHABET_NUM];
    std::memset(as32_count, 0, sizeof(int32_t) * ALPHABET_NUM);

    std::cout << mo_text << std::endl << std::endl;

    for (int32_t s32_i = 0; s32_i < mo_text.size(); s32_i++)
    {
        c8_ch = mo_text[s32_i];

        if (isalpha(c8_ch))
        {
            c8_ch = tolower(c8_ch);
            as32_count[c8_ch - 'a']++;
            s32_total++;
        }
    }

    std::cout << "ÃÑ ¾ËÆÄºª ¼ö " << s32_total << std::endl;

    for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
    {
        std::cout << (char)('a' + s32_i) << ":";

        for (int32_t s32_j = 0; s32_j < as32_count[s32_i]; s32_j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}