#include "08_Switch.h"

int main()
{
    int x;

    std::cout << "Which door number do you open?" << std::endl;
    std::cin >> x;

    switchFunction(x);

    return 0;
}