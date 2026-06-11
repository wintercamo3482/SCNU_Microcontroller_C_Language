#include "Library.h"

#include <iostream>

Library::Library(std::string o_name, int32_t s32_size)
{
    mo_name = o_name;
    ms32_size = s32_size;
    ms32_next = 0;
    mpo_p = new Book[ms32_size];
}

Library::~Library()
{
    delete[] mpo_p;
}

void Library::add(std::string o_name, int32_t s32_price)
{
    if (ms32_next < ms32_size)
    {
        mpo_p[ms32_next].set(o_name, s32_price);
        ms32_next++;
    }
}

void Library::show()
{
    std::cout << mo_name << "에 입고된 책은 다음 " << ms32_next << "권입니다." << std::endl;

    for (int32_t s32_i = 0; s32_i < ms32_next; s32_i++)
    {
        std::cout << mpo_p[s32_i].getTitle() << "\t";
    }

    std::cout << std::endl;
}

Book* Library::mostExpensive()
{
    Book* po_ret = NULL;
    int32_t s32_max_index = 0;

    do
    {
        if (ms32_next == 0)
        {
            break;
        }
        
        for (int32_t s32_i = 0; s32_i < ms32_next; s32_i++)
        {
            if (mpo_p[s32_i].getPrice() > mpo_p[s32_max_index].getPrice())
            {
                s32_max_index = s32_i;
            }
        }
        po_ret = &mpo_p[s32_max_index];

    } while (0);
    
    return po_ret;
}