#include <iostream>
#include <string>
#include <stdint.h>

bool equals(std::string o_x, std::string o_y)
{
    bool b1_ret = false;

    do
    {
        if (o_x != o_y)
        {
            break;
        }

        b1_ret = true;

    } while (0);
    
    return b1_ret;
}

bool equals(std::string o_x, std::string o_y, int32_t s32_n)
{
    bool b1_ret = false;

    do
    {
        if (o_x.substr(0, s32_n) != o_y.substr(0, s32_n))
        {
            break;
        }
    
        b1_ret = true;

    } while (0);

    return b1_ret;
}

bool equals(std::string o_x, std::string o_y, int32_t s32_n, std::string o_z)
{
    bool b1_ret = false;

    do
    {
        if (o_x.substr(0, s32_n) != o_y.substr(0, s32_n) || o_y.substr(0, s32_n) != o_z.substr(0, s32_n))
        {
            break;
        }

        b1_ret = true;

    } while (0);


    return b1_ret;
}

int main(void)
{
    std::string o_x = "Prof. Hwang";
    std::string o_y = "Prof. Kim";
    std::string o_z = "Prof. Lee";

    if (equals(o_x, o_y))
    {
        std::cout << "같음" << std::endl;
    }

    if (equals(o_x, o_y, 3))
    {
        std::cout << "앞 3글자 같음" << std::endl;
    }

    if (equals(o_x, o_y, 5, o_z))
    {
        std::cout << "앞 5글자 같음" << std::endl;
    }

    return 0;
}