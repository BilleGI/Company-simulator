#include "worker.h"

Worker::Worker(const std::string& name) : Company(name)
{}

void Worker::setTask()
{
    int randTask = rand()%3;

    if(randTask == 0) task = 'A';
    else if(randTask == 1) task = 'B';
    else if(randTask == 2) task = 'C';
}

char Worker::getTask()
{
    return task;
}
