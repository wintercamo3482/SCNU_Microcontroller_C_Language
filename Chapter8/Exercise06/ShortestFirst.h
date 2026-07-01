#ifndef SHORTESTFIRST_H
#define SHORTESTFIRST_H

#include "Schedule.h"

class ShortestFirst : public Schedule
{
public:
    ShortestFirst(int32_t s32_curloc, int32_t s32_n[], int32_t s32_count);

    int32_t run();
};

#endif /* SHORTESTFIRST_H */
