#ifndef MATRIX_2_H
#define MATRIX_2_H

#include <stdint.h>

#define ELEMENTS_NUM    4

class Matrix
{
private:
    int32_t mas32_data[ELEMENTS_NUM];

public:
    Matrix(int32_t s32_n0 = 0, int32_t s32_n1 = 0, int32_t s32_n2 = 0, int32_t s32_n3 = 0);

    void show();

    friend void operator>>(Matrix& ro_mat, int32_t as32_dest[]);
    friend void operator<<(Matrix& ro_mat, int32_t as32_src[]);
};

#endif /* MATRIX_2_H */