#include "company.h"

Company::Company(const std::string& name)
{
    this->name = name;
}

std::string Company::getName()
{
    return name;
}
