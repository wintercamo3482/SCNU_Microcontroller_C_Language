#include "AlbumManager.h"

#include <iostream>
#include <string>

AlbumManager::AlbumManager()
{
    mpo_album = NULL;
}

AlbumManager::~AlbumManager()
{
    delete mpo_album;
}

void AlbumManager::Run()
{
    int32_t s32_album_num = 0;
    
    std::string o_song_title;
    std::string o_singer;
    std::string o_search_title;

    Song* po_found = NULL;

    std::cout << DEFAULT_NAME <<" 앨범에 곡을 저장합니다" << std::endl;
    std::cout << "곡 개수 입력>>";
    std::cin >> s32_album_num;
    std::cin.ignore(1);

    mpo_album = new Album(DEFAULT_NAME, s32_album_num);

    for (int32_t s32_i = 0; s32_i < s32_album_num; s32_i++)
    {
        std::cout << "곡명? ";
        std::getline(std::cin, o_song_title, '\n');

        std::cout << "가수? ";
        std::getline(std::cin, o_singer, '\n');

        mpo_album->SetSong(s32_i, o_song_title, o_singer);
    }
    std::cout << mpo_album->GetName() << " 앨범에서 곡을 검색합니다." << std::endl;

    do
    {
        std::cout << "검색할 곡명 입력>>";
        std::getline(std::cin, o_search_title, '\n');

        if (o_search_title == "그만")
        {
            break;
        }

        po_found = mpo_album->FindSong(o_search_title);

        if (po_found == NULL)
        {
            std::cout << o_search_title << "는 없는 곡입니다." << std::endl;
        }
        else
        {
            std::cout << "가수는 " << po_found->GetSinger() << "입니다." << std::endl;
        }

    } while (true);
}