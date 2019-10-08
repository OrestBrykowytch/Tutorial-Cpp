#include <deque>
#include <iostream>

void creatingDeques()
{
    std::cout << "Basic Deque Setup: " << std::endl;

    int arrayOne[5] = { 1, 2, 3, 4, 5 };

    std::deque<int> deqOne;
    std::deque<int> deqTwo (5, 10);
    std::deque<int> deqThree (deqTwo.begin(), deqTwo.end());
    std::deque<int> deqFour (deqThree);
    std::deque<int> deqFive (arrayOne, arrayOne + sizeof(arrayOne) / sizeof(int));

    std::cout << "Deque 1 contains:";
    for (std::deque<int>::iterator x = deqOne.begin(); x != deqOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Deque 2 contains:";
    for (std::deque<int>::iterator x = deqTwo.begin(); x != deqTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Deque 3 contains:";
    for (std::deque<int>::iterator x = deqThree.begin(); x != deqThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Deque 4 contains:";
    for (std::deque<int>::iterator x = deqFour.begin(); x != deqFour.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Deque 5 contains:";
    for (std::deque<int>::iterator x = deqFive.begin(); x != deqFive.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void dequeAssign()
{
    std::cout << "std::deque::assign()" << std::endl;

    std::deque<int> deqOne;
    std::deque<int> deqTwo;
    std::deque<int> deqThree;
    std::deque<int>::iterator deqIt;
    int arrayOne[5] = { 1, 2, 3, 4, 5 };

    deqOne.assign(5, 10);

    deqIt = deqOne.begin();

    deqTwo.assign(deqIt, deqOne.end() - 2);

    deqThree.assign(arrayOne, arrayOne + 4);

    std::cout << "Size of Deque 1: " << deqOne.size() << std::endl;
    std::cout << "Deque 1 contains:";
    for (std::deque<int>::iterator x = deqOne.begin(); x != deqOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Size of Deque 2: " << deqTwo.size() << std::endl;
    std::cout << "Deque 2 contains:";
    for (std::deque<int>::iterator x = deqTwo.begin(); x != deqTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Size of Deque 3: " << deqThree.size() << std::endl;
    std::cout << "Deque 3 contains:";
    for (std::deque<int>::iterator x = deqThree.begin(); x != deqThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void dequeAt()
{
    std::cout << "std::deque::at()" << std::endl;

    std::deque<int> deqOne (5);

    for (auto x = 0; x < deqOne.size(); ++x)
    {
        deqOne.at(x) = x;
    }

    std::cout << "Deque 1 contains: ";
    for (auto x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne.at(x) << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeBack()
{
    std::cout << "std::deque::back()" << std::endl;

    std::deque<int> deqOne;

    deqOne.push_back(5);

    while (deqOne.back() != 1)
    {
        deqOne.push_back(deqOne.back() - 1);
    }

    std::cout << "Deque 1 contains: ";

    for (std::deque<int>::iterator deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << " " << *deqIt;
    }
    std::cout << '\n' << std::endl;
}

void dequeBegin()
{
    std::cout << "std::deque::begin()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (std::deque<int>::iterator deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << " " << *deqIt;
    }
    std::cout << '\n' << std::endl;
}

void dequeCbegin()
{
    std::cout << "std::deque::cbegin()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";

    for (auto deqIt = deqOne.cbegin(); deqIt != deqOne.cend(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeCend()
{
    std::cout << "std::deque::cend()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    
    for (auto deqIt = deqOne.cbegin(); deqIt != deqOne.cend(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeClear()
{
    std::cout << "std::deque::clear()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 pre-clear: ";
    for (auto deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << std::endl;

    deqOne.clear();

    std::cout << "Deque 1 post-clear: ";
    for (auto deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeCrbegin()
{
    std::cout << "std::deque::crbegin()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 backwards: ";
    for (std::deque<int>::const_reverse_iterator deqRit = deqOne.crbegin(); deqRit != deqOne.crend(); ++deqRit)
    {
        std::cout << *deqRit << " ";
    }
    std::cout << "\n" << std::endl;
}

void dequeCrend()
{
    std::cout << "std::deque::crend()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 backwards: ";

    for (std::deque<int>::const_reverse_iterator deqRit = deqOne.crbegin(); deqRit != deqOne.crend(); ++deqRit)
    {
        std::cout << *deqRit << " ";
    }
    std::cout << "\n" << std::endl;
}

void dequeEmplace()
{
    std::cout << "std::deque::emplace()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    auto deqIt = deqOne.emplace(deqOne.begin() + 1, 10);
    deqOne.emplace(deqIt, 20);
    deqOne.emplace(deqOne.end(), 30);

    std::cout << "Deque 1 now contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << "\n" << std::endl;
}

void dequeEmplace_back()
{
    std::cout << "std::deque::emplace_back()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    deqOne.emplace_back(10);
    deqOne.emplace_back(20);

    std::cout << "Deque 1 now contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << "\n" << std::endl;
}

void dequeEmplace_front()
{
    std::cout << "std::deque::emplace_front()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    deqOne.emplace_front(10);
    deqOne.emplace_front(20);

    std::cout << "Deque 1 contains: ";

    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << "\n" << std::endl;
}

void dequeEmpty()
{
    std::cout << "std::deque::empty()" << std::endl;

    std::deque<int> deqOne;

    std::cout << "If 1, Deque is empty, 0, Deque has at least one element."<< std::endl; 
    std::cout << deqOne.empty() << std::endl;

    deqOne.emplace_back(1);

    std::cout << deqOne.empty();
    
    std::cout << '\n' << std::endl;
}

void dequeEnd()
{
    std::cout << "std::deque::end()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };
    std::deque<int>::iterator deqIt = deqOne.begin();

    std::cout << "Deque 1 contains: ";
    while (deqIt != deqOne.end())
    {
        std::cout << *deqIt++ << " ";
    }

    std::cout << '\n' << std::endl;
}

void dequeErase()
{
    std::cout << "std::deque::erase()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    deqOne.erase(deqOne.begin());
    deqOne.erase(deqOne.begin() + 1, deqOne.end() - 1);

    std::cout << "Deque 1 now contains: ";
    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeFront()
{
    std::cout << "std::deque::front()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    deqOne.front() = deqOne.back();

    std::cout << "Deque 1 now contains: ";
    for (auto& x : deqOne)
    {
        std::cout << x << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeGet_allocator()
{
    std::cout << "std::deque::get_allocator()" << std::endl;

    std::deque<int> deqOne;
    int* deqIt;

    deqIt = deqOne.get_allocator().allocate(5);

    for (int x = 0; x < 5; ++x)
    {
        deqOne.get_allocator().construct(&deqIt[x], x + 1);
    }

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < 5; ++x)
    {
        std::cout << " " << deqIt[x];
    }
    std::cout << '\n' << std::endl;

    for (int x = 0; x < 5; ++x)
    {
        deqOne.get_allocator().destroy(&deqIt[x]);
    }

    deqOne.get_allocator().deallocate(deqIt, 5);
}

void dequeInsert()
{
    std::cout << "std::deque::insert()" << std::endl;

    std::deque<int> deqOne;
    std::deque<int> deqTwo = { 1, 2, 3, 4, 5 };
    std::deque<int>::iterator deqIt;

    for (int x = 0; x < 5; ++x)
    {
        deqOne.push_back(x + 1);
    }

    deqIt = deqOne.begin();

    deqIt = deqOne.insert(deqIt, 10);

    // Because we insert more than one element here, deqIt stops working as a pointer, which is why we
    // redefine it in the next line of code after this insertion.
    deqIt = deqOne.insert(deqIt, 2, 20);

    // Here ^^^
    deqIt = deqOne.begin() + 1;

    deqOne.insert(deqIt, deqTwo.begin(), deqTwo.end());

    std::cout << "Deque 1 contains: ";
    for (deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 contains: ";
    for (deqIt = deqTwo.begin(); deqIt != deqTwo.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeMax_size()
{
    std::cout << "std::deque::max_size()" << std::endl;

    std::deque<int> deqOne;

    std::cout << "Max size of Deque 1 is " << deqOne.max_size() << " elements." << std::endl;

    std::cout << std::endl;
}

void dequeOperatorEqualsSign()
{
    std::cout << "std::deque::operator=" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };
    std::deque<int> deqTwo = { 10, 20, 30, 40, 50 };
    std::deque<int>::iterator deqIt;

    std::cout << "Deque 1 contains: ";
    for (deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 contains: ";
    for (deqIt = deqTwo.begin(); deqIt != deqTwo.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << std::endl;


    deqTwo = deqOne;
    deqOne = std::deque<int> { 1, 2, 3 };

    std::cout << "Deque 1 contains: ";
    for (deqIt = deqOne.begin(); deqIt != deqOne.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 contains: ";
    for (deqIt = deqTwo.begin(); deqIt != deqTwo.end(); ++deqIt)
    {
        std::cout << *deqIt << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeOperatorSquareBrackets()
{
    std::cout << "std::deque::operator[]" << std::endl;
    
    std::deque<int> deqOne = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::deque<int>::size_type deqST = deqOne.size();

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqST; ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    for (int x = 0; x < deqST / 2; ++x)
    {
        int tempStorage;
        tempStorage = deqOne[deqST - 1 - x];
        deqOne[deqST - 1 - x] = deqOne[x];
        deqOne[x] = tempStorage;
    }

    std::cout << "Reversed Deque 1 is: ";
    for (int x = 0; x < deqST; ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequePop_back()
{
    std::cout << "std::deque::pop_back()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    deqOne.pop_back();

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequePop_front()
{
    std::cout << "std::deque::pop_front()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    deqOne.pop_front();

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequePush_back()
{
    std::cout << "std::deque::push_back()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    deqOne.push_back(10);

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}


void dequePush_front()
{
    std::cout << "std::deque::push_front()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    deqOne.push_front(10);

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeRbegin()
{
    std::cout << "std::deque::rbegin()" << std::endl;

    std::deque<int> deqOne (5);
    std::deque<int>::reverse_iterator deqRit = deqOne.rbegin();
    int x;

    for (deqRit; deqRit != deqOne.rend(); ++deqRit)
    {
        *deqRit = ++x;
    }

    std::cout << "Reverse Deque 1 is: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeRend()
{
    std::cout << "std::deque::rend()" << std::endl;

    std::deque<int> deqOne (5);
    
    std::deque<int>::reverse_iterator deqRit = deqOne.rbegin();
    int x = 0;

    for (deqRit; deqRit != deqOne.rend(); ++deqRit)
    {
        *deqRit = ++x;
    }

    std::cout << "Reverse Deque 1 is: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeResize()
{
    std::cout << "std::deque::resize()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    deqOne.resize(3);
    deqOne.resize(5, 10);
    deqOne.resize(9);

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << '\n' << std::endl;
}

void dequeShrink_to_fit()
{
    std::cout << "std::deque::shrink_to_fit()" << std::endl;

    std::deque<int> deqOne (10);

    std::cout << "Deque 1 has a size of " << deqOne.size() << " potential elements." << std::endl;

    deqOne.resize(5);

    std::cout << "Deque 1 now has a size of " << deqOne.size() << " potential elements.";

    std::cout << '\n' << std::endl;

    deqOne.shrink_to_fit();
}

void dequeSize()
{
    std::cout << "std::deque::size()" << std::endl;

    std::deque<int> deqOne (10);

    std::cout << "Size of Deque 1: " << deqOne.size() << std::endl;

    deqOne.resize(5);

    std::cout << "Size of Deque 1: " << deqOne.size();

    std::cout << '\n' << std::endl;
}

void dequeSwap()
{
    std::cout << "std::deque::swap()" << std::endl;

    std::deque<int> deqOne = { 1, 2, 3, 4, 5 };
    std::deque<int> deqTwo = { 10, 20, 30, 40, 50 };

    std::cout << "Deque 1 contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 contains: ";
    for (int x = 0; x < deqTwo.size(); ++x)
    {
        std::cout << deqTwo[x] << " ";
    }
    std::cout << std::endl;

    deqOne.swap(deqTwo);

    std::cout << "Deque 1 now contains: ";
    for (int x = 0; x < deqOne.size(); ++x)
    {
        std::cout << deqOne[x] << " ";
    }
    std::cout << std::endl;

    std::cout << "Deque 2 now contains: ";
    for (int x = 0; x < deqTwo.size(); ++x)
    {
        std::cout << deqTwo[x] << " ";
    }
    std::cout << '\n' << std::endl;
}