#ifndef CHART_H
#define CHART_H

#include <stdint.h>

class Chart
{
private:
    int32_t* mps32_data;
    int32_t ms32_size;
    int32_t ms32_count;

public:
    Chart(int32_t s32_size);
    ~Chart();

    void show();

    bool operator!();
    Chart& operator<<(int32_t s32_n);
    int32_t operator~();
};

#endif /* CHART_H */