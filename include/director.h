#pragma once
#include "manager.h"

class Director : public Company
{
    std::vector<Manager*> managers;
public:
    Director();
    ~Director();
    void command();
    bool fill();
};
