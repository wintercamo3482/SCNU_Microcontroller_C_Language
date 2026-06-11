#include <iostream>
#include <string>

int main(void)
{
	int32_t s32_vote = 0;
	int32_t s32_hwang_vote = 0;
	int32_t s32_jang_vote = 0;
	
	std::string o_select;

	std::cout << "과대표 출마자: 황수희, 장수희" << std::endl;

	while (true)
	{
		std::cout << "이름과 투표수>>";
		std::cin >> o_select;

		if (o_select == "그만")
		{
			break;
		}
		
		std::cin >> s32_vote;

		if (o_select == "황수희")
		{
			s32_hwang_vote += s32_vote;
		}

		else if (o_select == "장수희")
		{
			s32_jang_vote += s32_vote;
		}

		else
		{
			std::cout << o_select << "은 출마자가 아닙니다." << std::endl;
		}
	}

	std::cout << "최종 집계: " << "황수희 " << s32_hwang_vote << ", 장수희 " << s32_jang_vote << std::endl;

	if (s32_hwang_vote > s32_jang_vote)
	{
		std::cout << "과대표로 황수희가 선출되었습니다." << std::endl;
	}

	else if (s32_jang_vote > s32_hwang_vote)
	{
		std::cout << "과대표로 장수희가 선출되었습니다." << std::endl;
	}

	else
	{
		std::cout << "황수희와 장수희가 공동대표로 선출되었습니다." << std::endl;
	}

	return 0;
}