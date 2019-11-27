#include <iostream>
#include <string>


int add(int a, int b)
{
    return a + b;
}

void printGreeting()
{
    std::string name;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    system("clear");

    std::cout << "Hello, " << name << "." << std::endl;
}