#ifndef ALBUMMANAGER_H
#define ALBUMMANAGER_H

#include "Album.h"

#define DEFAULT_NAME    "¿ÂπÃ"

class AlbumManager
{
private:
    Album* mpo_album;

public:
    AlbumManager();
    ~AlbumManager();

    void Run();
};

#endif /* ALBUMMANAGER_H */