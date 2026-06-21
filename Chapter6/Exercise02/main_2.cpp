#include <iostream>
#include <stdint.h>

#define DEFAULT_ROW     2
#define DEFAULT_COL     2
#define DEFAULT_CHAR    '*'

void printMatrix(int32_t s32_row = DEFAULT_ROW, int32_t s32_col = DEFAULT_COL, char c8_ch = DEFAULT_CHAR)
{
    for (int32_t s32_i = 0; s32_i < s32_row; s32_i++)
    {
        for (int32_t s32_j = 0; s32_j < s32_col; s32_j++)
        {
            std::cout << c8_ch;
        }
        std::cout << std::endl;
    }
}

int main(void)
{
    printMatrix();          // 2x2 행렬에 '*' 문자로 출력
    printMatrix(2, 5, 'a'); // 2x5 행렬에 'a' 문자로 출력
    printMatrix(1, 10);     // 1x10 행렬에 '*' 문자로 출력

    return 0;
}