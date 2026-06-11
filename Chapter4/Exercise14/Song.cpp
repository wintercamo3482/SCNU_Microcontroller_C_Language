#include "Song.h"


Song::Song()
{
    mo_title = "";
    mo_singer = "";
}

Song::Song(std::string o_title, std::string o_singer)
{
    mo_title = o_title;
    mo_singer = o_singer;
}

void Song::Set(std::string o_title, std::string o_singer)
{
    mo_title = o_title;
    mo_singer = o_singer;
}

std::string Song::GetTitle()
{
    return mo_title;
}

std::string Song::GetSinger()
{
    return mo_singer;
}