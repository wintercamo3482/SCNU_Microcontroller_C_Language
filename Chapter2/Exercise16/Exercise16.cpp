#include <iostream>
#include <cstring>

#define STRING_LEN		100
#define ALPHABET_NUM	26

int main(void)
{
	char ac8_text1[STRING_LEN];
	char ac8_text2[STRING_LEN];
	
	char c8_ch1;
	char c8_ch2;

	bool ab1_found[ALPHABET_NUM] = { false };

	std::cout << "입력>>";
	std::cin.getline(ac8_text1, STRING_LEN);

	std::cout << "입력>>";
	std::cin.getline(ac8_text2, STRING_LEN);

	for (int32_t s32_i = 0; s32_i < strlen(ac8_text1); s32_i++)
	{
		c8_ch1 = tolower(ac8_text1[s32_i]);

		if (!isalpha(c8_ch1))
		{
			continue;
		}

		if (ab1_found[c8_ch1 - 'a'])
		{
			continue;
		}

		for (int32_t s32_j = 0; s32_j < strlen(ac8_text2); s32_j++)
		{
			c8_ch2 = tolower(ac8_text2[s32_j]);

			if (!isalpha(c8_ch2))
			{
				continue;
			}

			if (c8_ch1 == c8_ch2)
			{
				std::cout << c8_ch1 << ' ';
				ab1_found[c8_ch1 - 'a'] = true;
				break;
			}
		}
	}

	std::cout << std::endl;

	return 0;
}