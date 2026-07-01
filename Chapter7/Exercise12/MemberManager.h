#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H

#include "Member.h"

#define MAX_MEMBER      100

class MemberManager
{
private:
    Member mao_member[MAX_MEMBER];
    int32_t ms32_count;

public:
    MemberManager();

    MemberManager& operator<<(Member o_member);
    Member& operator[](int32_t s32_index);
};

#endif /* MEMBERMANAGER_H */