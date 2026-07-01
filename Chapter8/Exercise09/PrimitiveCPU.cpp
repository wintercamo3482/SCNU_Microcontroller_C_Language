#include "PrimitiveCPU.h"

PrimitiveCPU::PrimitiveCPU(int32_t s32_val)
: ms32_acc(s32_val)
{}

void PrimitiveCPU::add(int32_t s32_b)
{
    ms32_acc += s32_b;
}

void PrimitiveCPU::load(int32_t s32_b)
{
    ms32_acc = s32_b;
}

int32_t PrimitiveCPU::read()
{
    return ms32_acc;
}

void PrimitiveCPU::print()
{
    std::cout << "ms32_acc=" << ms32_acc << std::endl;
}