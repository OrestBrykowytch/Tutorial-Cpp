#include <iostream>

void switchFunction(int x)
{
    switch(x)
    {
        case 1:
            std::cout << "Door 1 opens and behind it is an dimly-lit room." << std::endl;
            break;
        case 2:
            std::cout << "Door 2 opens and behind it is a dark room." << std::endl;
            break;
        case 3:
            std::cout << "Door 3 opens and behind it is a very well lit room." << std::endl;
            break;
        default:
            std::cout << "You walk to the end of the hallway and find no room with that number." << std::endl;
            break;
    }
}