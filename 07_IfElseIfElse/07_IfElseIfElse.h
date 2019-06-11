#include <iostream>

void ifElseIfElseFunction(float x, float y)
{
    if (x > y)
    {
        std::cout << x << " is greater than " << y << "." << std::endl;
    }
    else if (x < y)
    {
        std::cout << x << " is less than " << y << "." << std::endl;
    }
    else
    {
        std::cout << x << " is equal to " << y << "." << std::endl;
    }   
}