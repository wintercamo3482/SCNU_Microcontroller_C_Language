#include "Trace.h"

#include <iostream>

std::string Trace::mao_tag[TRACE_MAX];
std::string Trace::mao_msg[TRACE_MAX];
int32_t Trace::ms32_count = 0;

void Trace::put(std::string o_tag, std::string o_msg)
{
    if (ms32_count < TRACE_MAX)
    {
        mao_tag[ms32_count] = o_tag;
        mao_msg[ms32_count] = o_msg;
        ms32_count++;
    }
}

void Trace::print()
{
    std::cout << "모든 Trace 정보 출력" << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        std::cout << mao_tag[s32_i] << ":\t" << mao_msg[s32_i] << std::endl;
    }
}

void Trace::print(std::string o_tag)
{
    std::cout << o_tag << "태그의 Trace 정보 출력" << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_count; s32_i++)
    {
        if (mao_tag[s32_i] == o_tag)
        {
            std::cout << mao_tag[s32_i] << ": " << mao_msg[s32_i] << std::endl;
        }
    }
}