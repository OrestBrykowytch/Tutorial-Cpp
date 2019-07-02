#include <iostream>
#include <vector>

void creatingVectors()
{
    int arrayOne[5] = { 1, 2, 3, 4, 5 };

    std::vector<int> vecOne;
    std::vector<int> vecTwo (5, 10);
    std::vector<int> vecThree (vecTwo.begin(), vecTwo.end());
    std::vector<int> vecFour (vecThree);
    std::vector<int> vecFive (arrayOne, arrayOne + sizeof(arrayOne) / sizeof(int));

    std::cout << "Basic vector setup: " << std::endl;

    std::cout << "Vector 1 contains:";
    for (std::vector<int>::iterator x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 2 contains:";
    for (std::vector<int>::iterator x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 3 contains:";
    for (std::vector<int>::iterator x = vecThree.begin(); x != vecThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 4 contains:";
    for (std::vector<int>::iterator x = vecFour.begin(); x != vecFour.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 5 contains:";
    for (std::vector<int>::iterator x = vecFive.begin(); x != vecFive.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorAssign()
{
    std::cout << "std::vector::assign()" << std::endl;

    std::vector<int> vecOne;
    std::vector<int> vecTwo;
    std::vector<int> vecThree;    
    std::vector<int>::iterator vecIt;

    vecOne.assign(5, 10);

    vecIt = vecOne.begin() + 1;

    vecTwo.assign(vecIt, vecOne.end() - 1);

    int arrayOne[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vecThree.assign(arrayOne, arrayOne + 7);

    std::cout << "Size of Vector 1: " << vecOne.size() << std::endl;
    std::cout << "Vector 1 contains:";
    for (std::vector<int>::iterator x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Size of Vector 2: " << vecTwo.size() << std::endl;
    std::cout << "Vector 2 contains:";
    for (std::vector<int>::iterator x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Size of Vector 3: " << vecThree.size() << std::endl;
    std::cout << "Vector 3 contains:";
    for (std::vector<int>::iterator x = vecThree.begin(); x != vecThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorAt()
{
    std::cout << "std::vector::at()" << std::endl;

    std::vector<int> vecOne (5);

    for (int x = 0; x < vecOne.size(); ++x)
    {
        vecOne.at(x) = x + 1;
    }

    std::cout << "Contents of Vector 1:";
    for (int x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << vecOne.at(x);
    }

    std::cout << '\n' << std::endl;
}

void vectorBack()
{
    std::cout << "std::vector::back()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    // This is so long and unnecessarily stupid. I had to write it out this way so I wasn't getting
    // ahead of myself with the methods I am using.

    if (vecOne.back() == 1)
    {
        std::cout << "The last element in the Vector has a value of 1." << std::endl;
    }
    else if (vecOne.back() == 2)
    {
        std::cout << "The last element in the Vector has a value of 2." << std::endl;
    }
    else if (vecOne.back() == 3)
    {
        std::cout << "The last element in the Vector has a value of 3." << std::endl;
    }
    else if (vecOne.back() == 4)
    {
        std::cout << "The last element in the Vector has a value of 4." << std::endl;
    }
    else if (vecOne.back() == 5)
    {
        std::cout << "The last element in the Vector has a value of 5.";
    }

    std::cout << '\n' << std::endl;
}

void vectorBegin()
{
    std::cout << "std::vector::begin()" << std::endl;

    std::vector<int> vecOne;

    for (int x = 0; x < 5; ++x)
    {
        vecOne.push_back(x + 1);
    }

    std::cout << "Vector 1 contains:";
    for (std::vector<int>::iterator x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorCapacity()
{
    std::cout << "std::vector::capacity()" << std::endl;

    std::vector<int> vecOne;

    for (int x = 0; x < 50; ++x)
    {
        vecOne.push_back(x);
    }

    // I will use this same code block for capacity, size, and max_size.
    // It will help you understand the comparison between the three.
    std::cout << "The capacity of Vector 1 is " << vecOne.capacity() << " elements." << std::endl;
    std::cout << "The size of Vector 1 is " << vecOne.size() << " elements." << std::endl;
    std::cout << "The maximum size of Vector 1 is " << vecOne.max_size() << " elements.";

    std::cout << '\n' << std::endl;
}

void vectorCbegin()
{
    std::cout << "std::vector::cbegin()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 contains:";

    for (auto x = vecOne.cbegin(); x != vecOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorCend()
{
    std::cout << "std::vector::cend()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 contains:";

    for (auto x = vecOne.cbegin(); x != vecOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;    
}

void vectorClear()
{
    std::cout << "std::vector::clear()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector contents before clear:";
    for (int x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << vecOne[x];
    }
    std::cout << std::endl;

    vecOne.clear();
    std::cout << "Vector contents post-clear:";
    for (int x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << vecOne[x];
    }

    std::cout << '\n' << std::endl;
}

void vectorCrbegin()
{
    std::cout << "std::vector::crbegin()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "The Vector's contents backwards are:";
    for (auto x = vecOne.crbegin(); x != vecOne.crend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorCrend()
{
    std::cout << "std::vector::crend()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "The Vector's contents backwards are:";
    for (auto x = vecOne.crbegin(); x != vecOne.crend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorData()
{
    std::cout << "std::vector::data()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    int* data = vecOne.data();

    std::cout << "The contents of Vector 1 are:";
    for (int x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << *data++;
    }

    std::cout << '\n' << std::endl;
}

void vectorEmplace()
{
    std::cout << "std::vector::emplace()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "The Vector before emplacement:";
    for (auto x = vecOne.cbegin(); x != vecOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    auto vecIt = vecOne.emplace(vecOne.begin() + 1, 10);
    vecOne.emplace(vecIt, 20);
    vecOne.emplace(vecOne.end(), 30);

    std::cout << "The Vector post-emplacement:";
    for (auto& x : vecOne)
    {
        std::cout << " " << x;
    }

    std::cout << '\n' << std::endl;
}

void vectorEmplace_back()
{
    std::cout << "std::vector::emplace_back()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector contents before emplace_back:";
    for (auto x = vecOne.cbegin(); x != vecOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << std::endl;

    vecOne.emplace_back(10);
    vecOne.emplace_back(20);

    std::cout << "Vector contents post-emplace_back:";
    for (auto& x : vecOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void vectorEmpty()
{
    std::cout << "std::vector::empty()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    std::vector<int> vecTwo;

    if (vecOne.empty())
    {
        std::cout << "Vector #1 is empty." << std::endl;
    }
    else
    {
        std::cout << "Vector #1 is not empty." << std::endl;
    }
    
    if (vecTwo.empty())
    {
        std::cout << "Vector #2 is empty." << std::endl;
    }
    else
    {
        std::cout << "Vector #2 is not empty.";
    }

    std::cout << std::endl;
}

void vectorEnd()
{
    std::cout << "std::vector::end()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "The Vector contains:";
    for (std::vector<int>::iterator x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorErase()
{
    std::cout << "std::vector::erase()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    std::vector<int> vecTwo = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 pre-erase:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 2 pre-erase:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne.erase(vecOne.begin());
    vecTwo.erase(vecTwo.begin(), vecTwo.end() - 1);

    std::cout << "Vector 1 post-erase:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 2 post-erase:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorFront()
{
    std::cout << "std::vector::front()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "The first element in the Vector is " << vecOne.front();

    std::cout << '\n' << std::endl;
}

void vectorGet_allocator()
{
    std::cout << "std::vector::get_allocator()" << std::endl;

    std::vector<int> vecOne;
    int* vecIt;

    vecIt = vecOne.get_allocator().allocate(5);

    for (int x = 0; x < 5; ++x)
    {
        vecOne.get_allocator().construct(&vecIt[x], x + 1);
    }

    std::cout << "Vector 1 contains:";
    for (int x = 0; x < 5; ++x)
    {
        std::cout << " " << vecIt[x];
    }
    std::cout << std::endl;

    for (int x = 0; x < 5; ++x)
    {
        vecOne.get_allocator().destroy(&vecIt[x]);
    }

    vecOne.get_allocator().deallocate(vecIt, 5);

    std::cout << std::endl;
}

void vectorInsert()
{
    std::cout << "std::vector::insert()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    std::vector<int> vecTwo = { 10, 20, 30, 40, 50 };
    std::vector<int> vecThree = { 100, 200, 300, 400, 500 };
    std::vector<int> vecFour = { 1000, 2000, 3000, 4000, 5000 };

    std::cout << "Vector 1 contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;
    
    std::cout << "Vector 2 contains:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 3 contains:";
    for (auto x = vecThree.begin(); x != vecThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 4 contains:";
    for (auto x = vecFour.begin(); x != vecFour.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    auto vecIt = vecOne.insert(vecOne.end(), 6);
    vecOne.insert(vecIt, 7);

    std::cout << "Vector 1 now contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    auto vecItTwo = vecTwo.insert(vecTwo.begin(), 3, 60);
    vecTwo.insert(vecItTwo, 2, 70);

    std::cout << "Vector 2 now contains:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecThree.insert(vecThree.end(), vecFour.begin(), vecFour.end());

    std::cout << "Vector 3 now contains:";
    for (auto x = vecThree.begin(); x != vecThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 4 now contains:";
    for (auto x = vecFour.begin(); x != vecFour.end(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorMax_size()
{
    std::cout << "std::vector::max_size()" << std::endl;

    std::vector<int> vecOne;

    for (int x = 0; x < 50; ++x)
    {
        vecOne.push_back(x);
    }

    // I will use this same code block for capacity, size, and max_size.
    // It will help you understand the comparison between the three.
    std::cout << "The capacity of Vector 1 is " << vecOne.capacity() << " elements." << std::endl;
    std::cout << "The size of Vector 1 is " << vecOne.size() << " elements." << std::endl;
    std::cout << "The maximum size of Vector 1 is " << vecOne.max_size() << " elements.";

    std::cout << '\n' << std::endl;
}

void vectorOperatorEqualsSign()
{
    std::cout << "std::vector::operator=" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    std::vector<int> vecTwo = { 6, 7, 8, 9, 0 };

    std::cout << "Vector 1 contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;
    
    std::cout << "Vector 2 contains:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne = vecTwo;

    std::cout << "Vector 1 now contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "Vector 2 now contains:";
    for (auto x = vecTwo.begin(); x != vecTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void vectorOperatorSquareBrackets()
{
    std::cout << "std::vector::operator[]" << std::endl;

    std::vector<int> vecOne = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int>::size_type vecSizeType = vecOne.size();

    std::cout << "Vector 1 contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    for (int x = 0; x < vecSizeType / 2; ++x)
    {
        int tempStorage;
        tempStorage = vecOne[vecSizeType - 1 - x];
        vecOne[x] = tempStorage;
    }

    std::cout << "Vector 1 now contains:";
    for (int x = 0; x < vecSizeType; ++x)
    {
        std::cout << " " << vecOne[x];
    }

    std::cout << '\n' << std::endl;
}

void vectorPop_back()
{
    std::cout << "std::vector::pop_back()" << std::endl;
    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne.pop_back();

    std::cout << "Vector 1 now contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorPush_back()
{
    std::cout << "std::vector::push_back()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne.push_back(10);

    std::cout << "Vector 1 now contains:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorRbegin()
{
    std::cout << "std::vector::rbegin()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    int x = 0;

    std::vector<int>::reverse_iterator vecRevIt = vecOne.rbegin();

    std::cout << "Vector 1 contains:";

    for (std::vector<int>::iterator vecIt = vecOne.begin(); vecIt != vecOne.end(); ++vecIt)
    {
        std::cout << " " << *vecIt;
    }

    std::cout << '\n' << std::endl;
}

void vectorRend()
{
    std::cout << "std::vector::rend()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    int x = 0;

    std::vector<int>::reverse_iterator vecRevIt = vecOne.rbegin();

    std::cout << "Vector 1 contains:";

    for (std::vector<int>::iterator vecIt = vecOne.begin(); vecIt != vecOne.end(); ++vecIt)
    {
        std::cout << " " << *vecIt;
    }

    std::cout << '\n' << std::endl;
}

void vectorReserve()
{
    std::cout << "std::vector::reserve()" << std::endl;

    std::vector<int>::size_type vecST;
    std::vector<int> vecOne;

    vecST = vecOne.capacity();

    std::cout << "Increasing the size of Vector 1" << std::endl;

    for (int x = 0; x < 100; ++x)
    {
        vecOne.push_back(x);

        if (vecST != vecOne.capacity())
        {
            vecST = vecOne.capacity();
            std::cout << "Vector 1's capacity has increased to: " << vecST << std::endl;
        }
    }
    

    // In this one, the only difference is the reserve() function call. We reserve 100 memory slots for vecTwo.
    std::vector<int> vecTwo;

    vecST = vecTwo.capacity();
    vecTwo.reserve(100);

    std::cout << "Increasing the size of Vector 2" << std::endl;

    for (int x = 0; x < 100; ++x)
    {
        vecTwo.push_back(x);

        if (vecST != vecTwo.capacity())
        {
            vecST = vecTwo.capacity();
            std::cout << "Vector 2's capacity has increased to: " << vecST << std::endl;
        }
    }

    std::cout << std::endl;
}

void vectorResize()
{
    std::cout << "std::vector::resize()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };

    std::cout << "Vector 1 currently holds:";

    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne.resize(10, 6);

    std::cout << "Vector 1 now holds:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    vecOne.resize(8);

    std::cout << "Vector 1 now holds:";
    for (auto x = vecOne.begin(); x != vecOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void vectorShrink_to_fit()
{
    std::cout << "std::vector::shrink_to_fit()" << std::endl;

    std::vector<int> vecOne (10);
    std::cout << "The current capacity of Vector 1 is: " << vecOne.capacity() << std::endl;

    vecOne.resize(5);
    std::cout << "Now, the capacity of Vector 1 is: " << vecOne.capacity() << std::endl;

    vecOne.shrink_to_fit();
    std::cout << "Now, the capacity of Vector 1 is: " << vecOne.capacity();

    std::cout << '\n' << std::endl;
}

void vectorSize()
{
    std::cout << "std::vector::size()" << std::endl;

    std::vector<int> vecOne;

    for (int x = 0; x < 50; ++x)
    {
        vecOne.push_back(x);
    }

    // I will use this same code block for capacity, size, and max_size.
    // It will help you understand the comparison between the three.
    std::cout << "The capacity of Vector 1 is " << vecOne.capacity() << " elements." << std::endl;
    std::cout << "The size of Vector 1 is " << vecOne.size() << " elements." << std::endl;
    std::cout << "The maximum size of Vector 1 is " << vecOne.max_size() << " elements.";

    std::cout << '\n' << std::endl;
}

void vectorSwap()
{
    std::cout << "std::vector::swap()" << std::endl;

    std::vector<int> vecOne = { 1, 2, 3, 4, 5 };
    std::vector<int> vecTwo = { 6, 7, 8, 9, 0 };

    std::cout << "Vector 1 currently contains:";
    for (auto x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << vecOne[x];
    }
    std::cout << std::endl;

    std::cout << "Vector 2 currently contains:";
    for (auto x = 0; x < vecTwo.size(); ++x)
    {
        std::cout << " " << vecTwo[x];
    }
    std::cout << std::endl;

    vecOne.swap(vecTwo);

    std::cout << "Vector 1 now contains:";
    for (auto x = 0; x < vecOne.size(); ++x)
    {
        std::cout << " " << vecOne[x];
    }
    std::cout << std::endl;

    std::cout << "Vector 2 now contains:";
    for (auto x = 0; x < vecTwo.size(); ++x)
    {
        std::cout << " " << vecTwo[x];
    }
    std::cout << std::endl;
}