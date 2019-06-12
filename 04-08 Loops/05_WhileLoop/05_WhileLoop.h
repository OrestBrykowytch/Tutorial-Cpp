#include <iostream>

void whileLoopFunction(int iterator)
{
    while (iterator <= 20)
    {
        std::cout << iterator << std::endl;

        ++iterator;
    }
}