#include <iostream>
#include <cstring>

#define STRING_LEN		10000
#define ALPHABET_NUM	26

int main(void)
{
	char ac8_buf[STRING_LEN];
	char c8_ch;

	int32_t as32_alpha[ALPHABET_NUM] = { 0 };
	int32_t s32_total = 0;

	std::cout << "히스토그램을 그립니다. 텍스트의 끝은 ; 이고" << std::endl;
	std::cout << STRING_LEN << "개 문자까지 가능합니다. 영문 텍스트를 입력하세요." << std::endl;

	std::cin.getline(ac8_buf, STRING_LEN, ';');

	for (int32_t s32_i = 0; s32_i < strlen(ac8_buf); s32_i++)
	{
		c8_ch = ac8_buf[s32_i];

		if (isalpha(c8_ch))
		{
			c8_ch = tolower(c8_ch);

			as32_alpha[c8_ch - 'a']++;
			s32_total++;
		}
	}

	std::cout << "총 알파벳 수" << s32_total << std::endl << std::endl;

	for (int32_t s32_i = 0; s32_i < ALPHABET_NUM; s32_i++)
	{
		c8_ch = 'a' + s32_i;

		std::cout << c8_ch << " (" << as32_alpha[s32_i] << ") : ";
		
		for (int32_t s32_j = 0; s32_j < as32_alpha[s32_i]; s32_j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}
	
	return 0;
}