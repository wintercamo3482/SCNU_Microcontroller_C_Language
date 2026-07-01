#ifndef NAMEDCIRCLE_H
#define NAMEDCIRCLE_H

#include "Circle.h"

#include <string>

class NamedCircle : public Circle
{
public:
    NamedCircle(int32_t s32_radius, std::string o_name);
    
    void show();

private:
    std::string mo_name;
};

#endif /* NAMEDCIRCLE_H */