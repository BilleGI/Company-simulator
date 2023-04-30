#pragma once
#include <string>

class Company
{
protected:
    std::string name = "No name";
public:
    Company(const std::string& name);
    std::string getName();
};
