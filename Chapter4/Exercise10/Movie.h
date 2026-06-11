#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <stdint.h>

class Movie
{
    std::string mo_title;
    int32_t ms32_score;

public:
    Movie()
    {
        mo_title = "";
        ms32_score = 0;
    }
    
    std::string getTitle() { return mo_title; }
    int32_t getScore() { return ms32_score; }
    void set(std::string o_title, int32_t s32_score);
};

#endif /* MOVIE_H */