#include <iostream>
#include <cstring>
#include <array>

void loopThroughArrays()
{
    std::cout << "Basic array setup: " << std::endl;

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
    std::cout << '\n' << std::endl;
}

void arrayAt()
{
    std::cout << "std::array::at()" << std::endl;

    std::array<int, 10> arrayToCheck;

    for (int x = 1; x < arrayToCheck.size() + 1; ++x)
    {
        arrayToCheck.at(x - 1) = x;
    }

    std::cout << "The array elements are:";
    
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << '\n' << std::endl;
}

void arrayBack()
{
    std::cout << "std::array::back()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };

    std::cout << "Array is: ";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;
    std::cout << "The last element in the array is: " << arrayToCheck.back() << std::endl;
    
    std::cout << std::endl;

    arrayToCheck.back() = 6;

    std::cout << "After changing, the array is: ";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;
    std::cout << "After changing, the last element in the array is: " << arrayToCheck.back() << std::endl;
    
    std::cout << std::endl;
}

void arrayBegin()
{
    std::cout << "std::array::begin()" << std::endl;
    
    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };

    std::cout << "The array is:";
    for (auto x = arrayToCheck.begin(); x != arrayToCheck.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void arrayCbegin()
{
    std::cout << "std::array::cbegin()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };
    std::cout << "The array is:";
    for (auto x = arrayToCheck.cbegin(); x != arrayToCheck.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void arrayCend()
{
    std::cout << "std::array::cend()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };
    std::cout << "The array is:";
    for (auto x = arrayToCheck.cbegin(); x != arrayToCheck.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void arrayCrbegin()
{
    std::cout << "std::array::crbegin()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };
    std::cout << "The array is:";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;

    std::cout << "The array after reversal:";
    for (auto x = arrayToCheck.crbegin(); x < arrayToCheck.crend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void arrayCrend()
{
    std::cout << "std::array::crend()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };
    std::cout << "The array is:";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;

    std::cout << "The array after reversal:";
    for (auto x = arrayToCheck.crbegin(); x < arrayToCheck.crend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void arrayData()
{
    std::cout << "std::array::data()" << std::endl;

    const char* testString = "This is a test";
    std::array<char, 15> charArray;

    std::memcpy(charArray.data(), testString, 14);

    std::cout << charArray.data();

    std::cout << '\n' << std::endl;
}

void arrayEmpty()
{
    std::cout << "std::array::empty()" << std::endl;

    std::array<int, 5> arrayOne;
    std::array<int, 0> arrayTwo;

    if (arrayOne.empty())
    {
        std::cout << "First array is empty." << std::endl;
    }
    else
    {
        std::cout << "First array is not empty." << std::endl;
    }
    
    if (arrayTwo.empty())
    {
        std::cout << "Second array is empty." << std::endl;
    }
    else
    {
        std::cout << "Second array is not empty." << std::endl;
    }
    std::cout << std::endl;
}

void arrayEnd()
{
    std::cout << "std::array::end()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };

    std::cout << "The array is:";
    for (auto x = arrayToCheck.begin(); x != arrayToCheck.end(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void arrayFill()
{
    std::cout << "std::array::fill()" << std::endl;

    std::array<int, 5> arrayToFill;
    std::cout << "Array before filling:";
    for (int& x : arrayToFill)
    {
        std::cout << " " << x;
    }

    std::cout << "  <--- These weird numbers don't matter, they are there as a buffer space when you declare but don't define an array." << std::endl;

    arrayToFill.fill(1);

    std::cout << "Array after filling:";
    for (int& x : arrayToFill)
    {
        std::cout << " " << x;
    }

    std::cout << '\n' << std::endl;
}

void arrayFront()
{
    std::cout << "std::array::front()" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };

    std::cout << "Array is: ";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;
    std::cout << "The first element in the array is: " << arrayToCheck.front() << std::endl;
    
    std::cout << std::endl;

    arrayToCheck.front() = 6;

    std::cout << "After changing, the array is: ";
    for (int x = 0; x < arrayToCheck.size(); ++x)
    {
        std::cout << " " << arrayToCheck.at(x);
    }
    std::cout << std::endl;
    std::cout << "After changing, the first element in the array is: " << arrayToCheck.front() << std::endl;
    
    std::cout << std::endl;
}

void arrayMaxSize()
{
    std::cout << "std::array::max_size()" << std::endl;

    std::array<int, 15> arrayToCheck;

    std::cout << "The array is capable of holding " << arrayToCheck.max_size() << " elements.";

    std::cout << '\n' << std::endl;
}

void arrayOperatorSquareBrackets()
{
    std::cout << "std::array::operator[]" << std::endl;

    std::array<int, 5> arrayToCheck = { 1, 2, 3, 4, 5 };

    std::cout << "The array is:";
    for (int x = 0; x < arrayToCheck.max_size(); ++x)
    {
        std::cout << " " << arrayToCheck[x];
    }
    
    std::cout << '\n' << std::endl;
}

void arrayRbegin()
{
    std::cout << "std::array::rbegin()" << std::endl;

    std::array<int, 5> arrayToReverse = { 1, 2, 3, 4, 5 };

    std::cout << "Array before reverse:";
    for (int x = 0; x < arrayToReverse.size(); ++x)
    {
        std::cout << " " << arrayToReverse[x];
    }

    std::cout << std::endl;

    std::cout << "Array after reverse:";
    for (auto x = arrayToReverse.rbegin(); x < arrayToReverse.rend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void arrayRend()
{
    std::cout << "std::array::rend()" << std::endl;

    std::array<int, 5> arrayToReverse = { 1, 2, 3, 4, 5 };

    std::cout << "Array before reverse:";
    for (int x = 0; x < arrayToReverse.size(); ++x)
    {
        std::cout << " " << arrayToReverse[x];
    }

    std::cout << std::endl;

    std::cout << "Array after reverse:";
    for (auto x = arrayToReverse.rbegin(); x < arrayToReverse.rend(); ++x)
    {
        std::cout << " " << *x;
    }

    std::cout << '\n' << std::endl;
}

void arraySize()
{
    std::cout << "std::array::size()" << std::endl;

    std::array<int, 5> arrayOne;
    std::array<int, 7> arrayTwo;

    std::cout << "The size of array one is " << arrayOne.size() << " elements." << std::endl;
    std::cout << "The size of array two is " << arrayTwo.size() << " elements." << std::endl;

    std::cout << std::endl;
}

void arraySwap()
{
    std::cout << "std::array::swap()" << std::endl;

    std::array<int, 5> arrayOne = { 1, 2, 3, 4, 5 };
    std::array<int, 5> arrayTwo = { 6, 7, 8, 9, 0 };

    std::cout << "Array 1 before swap:";
    for (int& x : arrayOne) std::cout << ' ' << x;

    std::cout << std::endl;

    std::cout << "Array 2 before swap:";
    for (int& x : arrayTwo) std::cout << ' ' << x;
    std::cout << std::endl;

    arrayOne.swap(arrayTwo);

    std::cout << "Array 1 after swap:";
    for (int& x : arrayOne) std::cout << ' ' << x;

    std::cout << std::endl;

    std::cout << "Array 2 after swap:";
    for (int& x : arrayTwo) std::cout << ' ' << x;

    std::cout << std::endl;
}