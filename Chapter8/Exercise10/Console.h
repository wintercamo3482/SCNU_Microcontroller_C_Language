#ifndef CONSOLE_H
#define CONSOLE_H

#include <stdint.h>
#include <string>

class Console
{
public:
    static int32_t GetMenu();
    static int32_t GetTime();
    static int32_t GetSeatNO();
    static std::string GetName();
};

#endif /* CONSOLE_H */