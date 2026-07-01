#include "GoldMember.h"

#include <iostream>

int main(void)
{
    Member o_a("황기태");
    GoldMember o_b("제인");

    for (int32_t s32_i = 0; s32_i < 5; s32_i++)
    {
        std::cout << (s32_i + 1) << " 이름과 지출액>>";
        
        std::string o_name;
        int32_t s32_pay;

        std::cin >> o_name >> s32_pay;

        if (o_name == "황기태")
        {
            o_a.earn(s32_pay);
        }
        else if (o_name == "제인")
        {
            o_b.earn(s32_pay);
        }
        else
        {
            s32_i--;    // 없는 회원이므로 다시 입력
        }
    }

    o_a.show();
    o_b.show();

    return 0;
}