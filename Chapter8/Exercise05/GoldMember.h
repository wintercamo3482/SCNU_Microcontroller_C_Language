#ifndef GOLDMEMBER_H
#define GOLDMEMBER_H

#include "Member.h"

class GoldMember : public Member
{
public:
	GoldMember(std::string o_name);

	void earn(int32_t s32_pay);
};

#endif /* GOLDMEMBER_H */