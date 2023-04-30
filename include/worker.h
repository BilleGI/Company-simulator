#pragma once
#include "company.h"

class Worker : public Company
{
    char task;

public:
    Worker(const std::string& name);
    char getTask();
    void setTask();
};
