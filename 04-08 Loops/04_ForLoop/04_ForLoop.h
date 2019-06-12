#include <iostream>

// Function to use loop
void forLoopFunction(int iterator)
{
    // Loop syntax
    // for (initialize int var; int var comparison; increment int var)
    for (int i; i < iterator; ++i)
    {
        std::cout << i + 1 << std::endl;
    }
}