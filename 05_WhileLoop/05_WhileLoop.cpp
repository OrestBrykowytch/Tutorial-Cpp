#include "05_WhileLoop.h"

int main()
{
    int inputIterator;
    std::cout << "What number would you like to use as an iterator here? The computer will list numbers between it and 20." << std::endl;
    std::cin >> inputIterator;

    whileLoopFunction(inputIterator);

    return 0;
}