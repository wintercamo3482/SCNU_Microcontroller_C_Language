#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <stdint.h>

class Book
{
    std::string mo_title;   // 책 제목
    int32_t ms32_price;     // 책 가격

public:
    Book()
    {
        mo_title = "";
        ms32_price = 0;
    }
    void set(std::string o_title, int32_t s32_price)
    {
        this->mo_title = o_title;
        this->ms32_price = s32_price;
    }
    std::string getTitle() { return mo_title; }
    int32_t getPrice() { return ms32_price; }
};

#endif /* BOOK_H */