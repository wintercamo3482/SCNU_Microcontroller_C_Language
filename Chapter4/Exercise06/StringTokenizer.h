#ifndef STRINGTOKENIZER_H
#define STRINGTOKENIZER_H

#include <string>
#include <stdint.h>

class StringTokenizer
{
    std::string* mpo_tokens;
    int32_t ms32_size = 0;
    int32_t ms32_nextTokenIndex = 0;    // next() 시에 다음 토큰(단어)에 대한 인덱스

public:
    StringTokenizer(std::string o_text, std::string o_delimiter);   // 생성자
    ~StringTokenizer();                                             // 소멸자
    int32_t length() { return ms32_size; }
    std::string next();                                             // 다음 토큰(단어) 리턴
    bool hasNext();                                                 // 모든 단어를 순회한 경우 false, 아니면 true 리턴
};

#endif /* STRINGTOKENIZER_H */