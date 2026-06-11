#include "Histogram.h"

#include <iostream>

Histogram::Histogram(std::string o_text)
{
    mo_text = o_text;

    for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
    {
        mas32_alpahbet[s32_i] = 0;
    }
}

void Histogram::add(std::string o_text)
{
    mo_text += o_text;
}

void Histogram::add(char c8_ch)
{
    mo_text += c8_ch;
}

void Histogram::count()
{
    char c8_ch;

    for (int32_t s32_i = 0; s32_i < mo_text.size(); s32_i++)
    {
        c8_ch = mo_text[s32_i];

        if (isalpha(c8_ch))
        {
            c8_ch = tolower(c8_ch);
            mas32_alpahbet[c8_ch - 'a']++;
        }
    }
}

void Histogram::draw()
{
    char c8_ch;
    int32_t s32_total = 0;

    count();

    for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
    {
        s32_total += mas32_alpahbet[s32_i];
    }

    std::cout << mo_text << std::endl << std::endl;
    std::cout << "총 알파벳 수 " << s32_total << std::endl << std::endl;

    for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
    {
        c8_ch = 'a' + s32_i;

        std::cout << c8_ch << "(" << mas32_alpahbet[s32_i] << ")\t: ";

        for (int32_t s32_j = 0; s32_j < mas32_alpahbet[s32_i]; s32_j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}