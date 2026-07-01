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

    friend Matrix operator+(const Matrix& ro_left, const Matrix& ro_right);
    friend Matrix& operator+=(Matrix& ro_left, const Matrix& ro_right);
    friend bool operator==(const Matrix& ro_left, const Matrix& ro_right);
};

#endif /* MATRIX_2_H */