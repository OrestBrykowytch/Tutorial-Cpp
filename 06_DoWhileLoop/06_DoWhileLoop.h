#include <iostream>

void doWhileFunction()
{
    bool repeat;
    char repeatQuestion;
    int repeatAmount = 0;

    do
    {
        ++repeatAmount;

        std::cout << "This loop has been run " << repeatAmount << " times." << std::endl;
        std::cout << "Would you like to continue? (Y/N)" << std::endl;
        std::cin >> repeatQuestion;

        if (repeatQuestion == 'y' || repeatQuestion == 'Y')
        {
            repeat = true;
        }
        else
        {
            repeat = false;
        }
    } while (repeat == true);   
}