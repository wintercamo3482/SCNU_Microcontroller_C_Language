#include "Recommender.h"

#include <iostream>

Recommender::Recommender(std::string o_name, int32_t s32_size)
{
	mo_name = o_name;
	ms32_size = s32_size;
	mpo_movies = new Movie[ms32_size];

	std::cout << mo_name << " 객체가 생성되었습니다." << std::endl;
}

Recommender::~Recommender()
{
	delete[] mpo_movies;
	
	std::cout << mo_name << " 객체가 소멸되었습니다." << std::endl;
}

void Recommender::read()
{
	std::string o_title;
	std::string o_temp;

	int32_t s32_score = 0;

	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		o_title = "";
		o_temp = "";
		s32_score = 0;

		std::cout << "영화" << s32_i + 1 << ">>";
		std::getline(std::cin, o_title, ',');
		std::cin >> s32_score;
		std::getline(std::cin, o_temp, '\n');

		if (!o_title.empty() && o_title[0] == ' ')
		{
			o_title = o_title.substr(1);
		}
		mpo_movies[s32_i].set(o_title, s32_score);
	}
}
void Recommender::list()
{
	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		std::cout << "[" << mpo_movies[s32_i].getTitle() << ", " << mpo_movies[s32_i].getScore() << "]";

		if (s32_i != ms32_size - 1)
		{
			std::cout << "\t";
		}
	}
	std::cout << std::endl;
}

Movie Recommender::recommend()
{
	Movie o_ret;
	int32_t s32_max_index = 0;

	for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
	{
		if (mpo_movies[s32_i].getScore() > mpo_movies[s32_max_index].getScore())
		{
			s32_max_index = s32_i;
		}
	}
	o_ret = mpo_movies[s32_max_index];

	return o_ret;
}