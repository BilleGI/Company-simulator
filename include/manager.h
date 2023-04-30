#pragma once
#include "worker.h"
#include <vector>

class Manager : public Company
{
    int numberTask = 0;
    std::vector<Worker*> workers;
    bool checkTask = true;
public:
    Manager(const std::string& InName, const int& num);
    ~Manager();

    void setCommand(int& command, int& numManager);
    bool getCheckTask();
    int getNumber();
};
