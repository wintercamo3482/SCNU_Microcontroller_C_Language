#ifndef PICTURE_H
#define PICTURE_H

#include <stdint.h>
#include <string>

class Picture
{
private:
    int32_t ms32_width;
    int32_t ms32_height;
    std::string mo_place;

public:
    Picture();
    Picture(int32_t s32_width, int32_t s32_height, std::string o_place);

    int32_t getWidth();
    int32_t getHeight();
    std::string getPlace();
};

#endif /* PICTURE_H */