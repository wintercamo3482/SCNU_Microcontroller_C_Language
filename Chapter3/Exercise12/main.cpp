#include "Chart.h"

#include <iostream>

using namespace std;

int main(void)
{
    Chart o_chart("색 선호도 조사 차트:");	// 차트 제목과 함께 chart 객체 생성

    for (int32_t s32_i = 0; s32_i < o_chart.getNumberOfColors(); s32_i++)
    {
        cout << o_chart.getColor(s32_i) << "이 좋은 학생>>";

        int32_t s32_count;

        cin >> s32_count;
        o_chart.add(s32_i, s32_count);
    }
    o_chart.draw();

    return 0;
}