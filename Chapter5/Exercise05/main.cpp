#include "Color.h"

#include <iostream>

int main(void)
{
    Color o_fore(255, 0, 0);
    Color o_back(15, 128, 200);

    int32_t s32_r = 0;
    int32_t s32_g = 0;
    int32_t s32_b = 0;

    o_fore.get(s32_r, s32_g, s32_b);

    std::cout << "red=" << s32_r << ",green=" << s32_g << ",blue=" << s32_b << std::endl;
    
    o_back.get(s32_r, s32_g, s32_b);
    std::cout << "red=" << s32_r << ",green=" << s32_g << ",blue=" << s32_b << std::endl;

    return 0;
}