#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <stdint.h>

#define DEFAULT_POINT   100

class Member
{
private:
    std::string mo_name;
    int32_t ms32_point;

public:
    Member(std::string o_name = "", int32_t s32_point = DEFAULT_POINT);

    void show();

    Member& operator+=(int32_t s32_point);
};

#endif /* MEMBER_H */