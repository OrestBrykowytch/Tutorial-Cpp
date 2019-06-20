#include <iostream>
#include <array>

void loopThroughArrays()
{
    int intArray1[5] = { 0, 1, 2, 3, 4 };
    int intArray2[5] = { 5, 6, 7 };
    int intArray3[5] = {};

    std::array<int, 3> libArray1 = { 1, 2, 3 };
    std::array<int, 3> libArray2 = { 1, 2 };
    std::array<int, 3> libArray3 = {};
    
    for (int x = 0; x < 5; ++x)
    {
        std::cout << intArray1[x] << " ";
    }

    std::cout << '\n' << std::endl;

    for (int x = 0; x < 5; ++x)
    {
        std::cout << intArray2[x] << " ";
    }

    std::cout << '\n' << std::endl;

    for (int x = 0; x < 5; ++x)
    {
        std::cout << intArray3[x] << " ";
    }

    std::cout << '\n' << std::endl;

    for (int x = 0; x < libArray1.size(); ++x)
    {
        std::cout << libArray1[x] << " ";
    }

    std::cout << '\n' << std::endl;

    for (int x = 0; x < libArray2.size(); ++x)
    {
        std::cout << libArray2[x] << " ";
    }

    std::cout << '\n' << std::endl;

    for (int x = 0; x < libArray3.size(); ++x)
    {
        std::cout << libArray3[x] << " ";
    }
}