#ifndef STORAGE_H
#define STORAGE_H

#include <stdint.h>

class Storage
{
private:
    double mad64_data[10];
    int32_t ms32_next;

public:
    Storage();

    void put(double d64_temperature);
    void dump();
    double getAvg();
};

#endif /* STORAGE_H */