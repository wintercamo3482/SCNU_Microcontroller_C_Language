#include "Album.h"

Album::Album(std::string o_name, int32_t s32_size)
{
    mo_name = o_name;
    ms32_size = s32_size;
    mpo_songs = new Song[ms32_size];
}

Album::~Album()
{
    delete[] mpo_songs;
}

void Album::SetSong(int32_t s32_index, std::string o_title, std::string o_singer)
{
    if (s32_index >= 0 && s32_index < ms32_size)
    {
        mpo_songs[s32_index].Set(o_title, o_singer);
    }
}

std::string Album::GetName()
{
    return mo_name;
}

Song* Album::FindSong(std::string o_title)
{
    Song* po_ret = NULL;
    
    
    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        if (mpo_songs[s32_i].GetTitle() == o_title)
        {
            po_ret = &mpo_songs[s32_i];
            break;
        }
    }   

    return po_ret;
}