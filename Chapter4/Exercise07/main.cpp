#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#define FRONT_NUM   8
#define BACK_NUM    10

int main(void)
{
    int32_t s32_idx1 = 0;
    int32_t s32_idx2 = 0;

    std::string o_input;

    std::string ao_front[FRONT_NUM] = { "뛰어난", "사랑스러운", "까불까불", "씩씩한", "귀여운", "용감한", "행복한", "예쁜" };
    std::string ao_back[BACK_NUM] = { "호랑이", "장미", "고양이", "나팔꽃", "독수리", "토끼", "개나리", "강아지", "벚꽃", "돌고래" };

    srand((unsigned)time(NULL));
	
    do
	{
        std::cout << "사용자 ID 생성(yes/no)>>";
        std::cin >> o_input;

        if (o_input != "yes")
        {
            break;
        };

        s32_idx1 = rand() % 8;
        s32_idx2 = rand() % 8;

        std::cout << ao_front[s32_idx1] << " " << ao_back[s32_idx2] << std::endl;

	} while (true);

	return 0;
}