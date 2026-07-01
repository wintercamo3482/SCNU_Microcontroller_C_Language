#include "Matrix_2.h"

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

Matrix operator+(const Matrix& ro_left, const Matrix& ro_right)
{
    Matrix o_ret;

    for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
    {
        o_ret.mas32_data[s32_i] = ro_left.mas32_data[s32_i] + ro_right.mas32_data[s32_i];
    }

    return o_ret;
}

Matrix& operator+=(Matrix& ro_left, const Matrix& ro_right)
{
    for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
    {
        ro_left.mas32_data[s32_i] += ro_right.mas32_data[s32_i];
    }

    return ro_left;
}

bool operator==(const Matrix& ro_left, const Matrix& ro_right)
{
    bool b1_ret = false;

    do
    {
        for (int32_t s32_i = 0; s32_i < ELEMENTS_NUM; s32_i++)
        {
            if (ro_left.mas32_data[s32_i] != ro_right.mas32_data[s32_i])
            {
                break;
            }
        }
        b1_ret = true;

    } while (0);

    return b1_ret;
}