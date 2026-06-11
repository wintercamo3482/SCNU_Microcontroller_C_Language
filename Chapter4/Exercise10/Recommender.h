#ifndef RECOMMENDER_H
#define RECOMMENDER_H

#include "Movie.h"

class Recommender
{
private:
	std::string mo_name;
	int32_t ms32_size;
	Movie* mpo_movies;

public:
	Recommender(std::string o_name, int32_t s32_size);
	~Recommender();

	void read();
	void list();
	Movie recommend();
};

#endif /* RECOMMENDER_H */