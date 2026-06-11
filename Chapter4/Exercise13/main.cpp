#include "Histogram.h"

#include <iostream>

int main(void)
{
    Histogram o_histo("You fill up my senses, like a night in a forest\n");
    o_histo.add("Like the mountains in springtime, like a walk in the rain\n");
    o_histo.add('-');
    o_histo.add("Annie's song by John Denver");
    o_histo.draw(); // 원문 텍스트와 히스토그램 모두 출력

    return 0;
}