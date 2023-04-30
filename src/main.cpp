#include <iostream>
#include "director.h"

int main()
{
    std::cout << "The program simulates the work of the company." << std::endl;

    Director director;
    while(!director.fill())
    {
        director.command();
    }

    return 0;
}
