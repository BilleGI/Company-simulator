#include "director.h"
#include <iostream>

Director::Director() : Company("Director")
{
    int number;
    std::cout << "Enter the number of commands: ";
    do
    {
        std::cin >> number;
    } while(number < 1);

    for(int i = 0; i < number; ++i)
    {
        std::string nameManager = "Manager " +  std::to_string(i+1);
        Manager* manager = new Manager (nameManager, i+1);
        managers.push_back(manager);
    }
}

Director::~Director()
{
    std::cout << "Director " << name << " issued tasks: " << std::endl;
    for(auto it : managers)
    {
        std::cout << "For manager " << it->getName() << " in quantity " << it->getNumber() << std::endl;
        delete it;
    }
}

void Director::command()
{
    std::cout << std::endl;
    for(int i = 0; i < managers.size(); ++i)
    {
        if (managers[i]->getCheckTask())
        {
            int command;
            std::cout << "Enter the command for " << managers[i]->getName() << ": ";
            do
            {
                std::cin >> command;
            } while(command < 1);

            managers[i]->setCommand(command, i);
        }
        else if(!managers[i]->getCheckTask())
            std::cout << "The command " <<  managers[i]->getName() << " already occupied." << std::endl;
    }
}


bool Director::fill()
{
    for(auto it : managers)
    {
        if(it->getCheckTask())
            return false;
    }
    return true;
}
