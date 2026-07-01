#ifndef COMPACTDISC_H
#define COMPACTDISC_H

#include "Product.h"

class CompactDisc : public Product
{
public:
    CompactDisc(int32_t s32_id = -1, int32_t s32_price = -1, std::string o_producer = "", std::string o_description = "", std::string o_album_title = "", std::string o_singer = "");
    
    void ShowCD();

protected:
    std::string mo_album_title;
    std::string mo_singer;
};

#endif /* COMPACTDISC_H */