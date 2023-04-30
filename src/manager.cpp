#include <iostream>
#include "manager.h"

Manager::Manager(const std::string& InName, const int& num) : Company(InName)
{
    int sizeCommand;
    bool TeamEmployment = false;
    std::cout << "Enter the size of the manager`s team " << num  << ": ";
    do
    {
        std::cin >> sizeCommand;
    }while(sizeCommand < 1);

    for (int i = 0; i < sizeCommand; ++i)
    {
        std::string nameWorker = "Worker " + std::to_string(num) + "." + std::to_string(i+1);
        Worker* worker = new Worker(nameWorker);
        workers.push_back(worker);
    }
}

Manager::~Manager()
{
    for(auto it : workers)
    {
        std::cout << "Worker " << it->getName() << " performs the task " << it->getTask() << std::endl;
        delete it;
    }
}

void Manager::setCommand(int& command, int& numManager)
{
    std::srand(command + (numManager + 1));
    int newCommand = ((rand()%this->workers.size()) + 1);
    for(int i = numberTask; i < this->workers.size(); ++i)
    {
        workers[i]->setTask();
        std::cout << workers[i]->getName() << " got the task " << workers[i]->getTask() << std::endl;
        if((newCommand + numberTask) == (i+1))
           break;
    }
    numberTask += newCommand;

    if(numberTask >= this->workers.size())
        checkTask = false;
}

bool Manager::getCheckTask()
{
    return checkTask;
}

int Manager::getNumber()
{
    return numberTask;
}
