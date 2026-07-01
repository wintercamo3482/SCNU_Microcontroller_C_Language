#include "Seat.h"

#include <iostream>

Seat::Seat()
: mo_name("---")
{}

void Seat::Reserve(std::string o_name)
{
	mo_name = o_name;
}

void Seat::Cancel(std::string o_name)
{
    if (mo_name == o_name)
    {
        mo_name = "---";
    }
}

void Seat::Show()
{
    std::cout << "\t" << mo_name;
}