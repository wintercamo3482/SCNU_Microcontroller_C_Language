#ifndef TRACE_H
#define TRACE_H

#include <string>

#define TRACE_MAX   1000

class Trace
{
private:
    static std::string mao_tag[TRACE_MAX];
    static std::string mao_msg[TRACE_MAX];
    static int32_t ms32_count;

public:
    static void put(std::string o_tag, std::string o_msg);
    static void print();
    static void print(std::string o_tag);
};

#endif /* TRACE_H */