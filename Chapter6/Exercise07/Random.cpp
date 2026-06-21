#include "Random.h"

int32_t Random::nextInt(int32_t s32_min, int32_t s32_max)
{
    int32_t s32_ret = 0;

    s32_ret = rand() % (s32_max - s32_min + 1) + s32_min;

    return s32_ret;
}

char Random::nextAlphabet()
{
    char c8_ret = 'A';
    int32_t s32_n = rand() % (2 * ALPHABET_NUM);

    if (s32_n < ALPHABET_NUM)
    {
        c8_ret += s32_n;
    }
    else
    {
        c8_ret = 'a' + (s32_n - ALPHABET_NUM);
    }

    return c8_ret;
}

double Random::nextDouble()
{
    double d64_ret = 0.0;

    d64_ret = (double)rand() / RAND_MAX;

    return d64_ret;
}