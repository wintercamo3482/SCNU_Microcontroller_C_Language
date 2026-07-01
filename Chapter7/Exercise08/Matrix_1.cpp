#include "Matrix_1.h"

#include <iostream>

Matrix::Matrix(int32_t s32_n0, int32_t s32_n1, int32_t s32_n2, int32_t s32_n3)
{
    mas32_data[0] = s32_n0;
    mas32_data[1] = s32_n1;
    mas32_data[2] = s32_n2;
    mas32_data[3] = s32_n3;
}

void Matrix::show()
{
    std::cout << "Matrix = { ";

    for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
    {
        std::cout << mas32_data[s32_i];

        if (s32_i != 3)
        {
            std::cout << ' ';
        }
    }

    std::cout << " }" << std::endl;
}

void Matrix::operator>>(int32_t as32_dest[])
{
    for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
    {
        as32_dest[s32_i] = mas32_data[s32_i];
    }
}

void Matrix::operator<<(int32_t as32_src[])
{
    for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
    {
        mas32_data[s32_i] = as32_src[s32_i];
    }
}