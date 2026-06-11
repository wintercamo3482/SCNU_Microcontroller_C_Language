#include "StringTokenizer.h"

StringTokenizer::StringTokenizer(std::string o_text, std::string o_delimiter)
{
    size_t sz_pos = 0;
    size_t sz_start = 0;
    
    int32_t s32_index = 0;

    while ((sz_pos = o_text.find(o_delimiter, sz_start)) != std::string::npos)
    {
        ms32_size++;
        sz_start = sz_pos + o_delimiter.length();
    }
    ms32_size++;

    mpo_tokens = new std::string[ms32_size];

    sz_start = 0;

    while ((sz_pos = o_text.find(o_delimiter, sz_start)) != std::string::npos)
    {
        mpo_tokens[s32_index++] = o_text.substr(sz_start, sz_pos - sz_start);
        sz_start = sz_pos + o_delimiter.length();
    }

    mpo_tokens[s32_index] = o_text.substr(sz_start);
    ms32_nextTokenIndex = 0;
}

StringTokenizer::~StringTokenizer()
{
    delete[] mpo_tokens;
}

std::string StringTokenizer::next()
{
    std::string o_ret = "";

    if (ms32_nextTokenIndex < ms32_size)
    {
        o_ret = mpo_tokens[ms32_nextTokenIndex++];
    }

   return o_ret;
}

bool StringTokenizer::hasNext()
{
    return (ms32_nextTokenIndex < ms32_size);
}