#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>

#define ALPHABET_NUM    26

class Histogram
{
private:
    std::string mo_text;

public:
    Histogram(std::string o_text = "");

    Histogram& operator<<(std::string o_text);
    Histogram& operator<<(char c8_ch);

    void operator!();
};

#endif /* HISTOGRAM_H */