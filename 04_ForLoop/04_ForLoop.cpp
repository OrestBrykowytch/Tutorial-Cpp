#include "04_ForLoop.h"

int main()
{
    // Declare variable
    int inputIterator;

    // Output to console a question for the user to answer
    std::cout << "Please enter a number to iterate with: ";

    // Input answer into inputIterator
    std::cin >> inputIterator;

    // Call function forLoopFunction with passed variable inputIterator
    forLoopFunction(inputIterator);

    return 0;
}