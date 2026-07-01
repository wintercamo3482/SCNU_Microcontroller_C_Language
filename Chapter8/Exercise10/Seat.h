#ifndef SEAT_H
#define SEAT_H

#include <string>

class Seat
{
public:
    Seat();

    void Reserve(std::string o_name);
    void Cancel(std::string o_name);
    void Show();

private:
    std::string mo_name;
};

#endif /* SEAT_H */
