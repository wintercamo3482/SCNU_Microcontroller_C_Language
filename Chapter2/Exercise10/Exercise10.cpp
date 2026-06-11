#include <iostream>

int main(void)
{
	char ac8_buf[100];
	int32_t s32_count = 0;

	while (true)
	{
		std::cout << "영문 텍스트 입력하세요(빈칸 포함 가능)>>";
		std::cin.getline(ac8_buf, 100);

		if (strcmp(ac8_buf, "exit") == 0)
		{
			break;
		}

		s32_count = 0;
		
		for (int32_t s32_i = 0; s32_i < strlen(ac8_buf); s32_i++)
		{
			if (ac8_buf[s32_i] != ' ' && (s32_i == 0 || ac8_buf[s32_i - 1] == ' '))
			{
				s32_count++;
			}
		}

		std::cout << "단어의 개수는 " << s32_count << "개이다." << std::endl;
	}
	
	return 0;
}