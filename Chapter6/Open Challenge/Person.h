#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <stdint.h>

class Person
{
private:
    std::string mo_name;

public:
    Person(std::string o_name);
    
    std::string GetName();
    int32_t Guess();
};

#endif /* PERSON_H */