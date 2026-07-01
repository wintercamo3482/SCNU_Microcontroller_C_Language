#include "MemberManager.h"

MemberManager::MemberManager()
{
    ms32_count = 0;
}

MemberManager& MemberManager::operator<<(Member o_member)
{
    if (ms32_count < MAX_MEMBER)
    {
        mao_member[ms32_count++] = o_member;
    }
    return *this;
}

Member& MemberManager::operator[](int32_t s32_index)
{
    return mao_member[s32_index];
}