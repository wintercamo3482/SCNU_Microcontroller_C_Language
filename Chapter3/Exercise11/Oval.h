#ifndef OVAL_H
#define OVAL_H

#include <stdint.h>

class Oval
{
private:
    int32_t ms32_width;
    int32_t ms32_height;

public:
    Oval();
    Oval(int32_t s32_width, int32_t s32_height);
    
    ~Oval();

    int32_t getWidth() { return ms32_width; };
    int32_t getHeight() { return ms32_height; };

    void set(int32_t s32_width, int32_t s32_height);
    void show();
    double area();
};

#endif /* OVAL_H */