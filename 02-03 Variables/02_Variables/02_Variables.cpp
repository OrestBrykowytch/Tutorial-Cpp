#include "02_Variables.h"

int main()
{
    // Definition of Predeclared Variable
    isMale = true;

    // Print Out Variables
    std::cout << isMale << std::endl;
    std::cout << firstName << std::endl;
    std::cout << lastInitial << std::endl;
    std::cout << age << std::endl;

    // Redefinition of Predeclared and Predefined Variable
    age = 15;

    // Print Out Variable
    std::cout << age << std::endl;
}