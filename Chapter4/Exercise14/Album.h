#ifndef ALBUM_H
#define ALBUM_H

#include "Song.h"

#include <stdint.h>

class Album
{
private:
    std::string mo_name;
    int32_t ms32_size;
    Song* mpo_songs;


public:
    Album(std::string o_name, int32_t s32_size);
    ~Album();

    void SetSong(int32_t s32_index, std::string o_title, std::string o_singer);
    std::string GetName();
    Song* FindSong(std::string o_title);
};

#endif /* ALBUM_H */