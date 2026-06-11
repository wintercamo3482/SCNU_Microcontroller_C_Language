#ifndef CHART_H
#define CHART_H

#include <string>
#include <stdint.h>

#define COLOR_NUM   3

class Chart
{
private:
    std::string mo_title;
    int32_t mas32_data[COLOR_NUM];
    std::string mo_color[COLOR_NUM];

public:
    Chart(std::string o_title);
    ~Chart();

    int32_t getNumberOfColors();
    std::string getColor(int32_t s32_index);

    void add(int32_t s32_index, int32_t s32_count);
    void draw();
};

#endif /* CHART_H */