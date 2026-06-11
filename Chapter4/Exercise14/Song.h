#ifndef SONG_H
#define SONG_H

#include <string>

class Song
{
private:
    std::string mo_title;
    std::string mo_singer;

public:
    Song();
    Song(std::string o_title, std::string o_singer);

    void Set(std::string o_title, std::string o_singer);

    std::string GetTitle();
    std::string GetSinger();
};

#endif /* SONG_H */
