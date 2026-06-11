#include "Memo.h"

#include <iostream>

Memo::Memo(std::string o_date, std::string o_content)
{
    mo_date = o_date;
    mo_content = o_content;
}

std::string Memo::getDate()
{
    return mo_date;
}

std::string Memo::getContent()
{
    return mo_content;
}

bool Memo::isSameDate(Memo b)
{
    return mo_date == b.mo_date;
}

void Memo::show()
{
    std::cout << mo_date << ", " << mo_content << std::endl;
}