#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
#include <stdint.h>

#define ALPHABET_NUM    26

class Histogram
{
private:
    std::string mo_text;
    int32_t mas32_alpahbet[ALPHABET_NUM];

    void count();

public:
    Histogram(std::string o_text);

    void add(std::string o_text);
    void add(char c8_ch);
    void draw();
};

#endif /* HISTOGRAM_H */