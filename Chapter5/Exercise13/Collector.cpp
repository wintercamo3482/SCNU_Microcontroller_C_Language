#include "Collector.h"

#include <iostream>

Collector::Collector(int32_t s32_size, int32_t as32_values[])
{
    ms32_size = s32_size;

    mps32_p = new int32_t[ms32_size];

    std::memcpy(mps32_p, as32_values, sizeof(int32_t) * ms32_size);
}

Collector::Collector(const Collector& ro_src)
{
    ms32_size = ro_src.ms32_size;
    mps32_p = new int32_t[ms32_size];

    std::memcpy(mps32_p, ro_src.mps32_p, sizeof(int32_t) * ms32_size);
}

Collector::~Collector()
{
    delete[] mps32_p;   // 동적 할당받은 메모리 반환
}

void Collector::show()
{
    std::cout << "데이터 수 " << getSize() << ": ";

    for (int32_t s32_i = 0; s32_i < ms32_size; s32_i++)
    {
        std:: cout << mps32_p[s32_i] << ' ';
    }

    std::cout << std::endl;
}