#include <iostream>
#include <map>

// Function for Map instantiation
bool functionComparison (char first, char second)
{
    return first < second;
}

// Struct for Map instantiation
struct structComparison
{
    bool operator() (const char& first, const char& second) const
    {
        return first < second;
    }
};


void constructingMaps()
{
    std::map<char, int> mOne;
    std::map<char, int> mTwo (mOne.begin(), mOne.end());
    std::map<char, int> mThree (mTwo);
    std::map<char, int, structComparison> mFour;

    bool(*functionPointer)(char, char) = functionComparison;
    std::map<char, int, bool(*)(char, char)> mFive (functionPointer);
}

void mapAt()
{
    std::cout << "std::map::at()" << std::endl;

    // Look at this. This is so annoying to write out. This right here is the main reason I hate initializing maps like so.
    std::map<char, int> mOne = { { 'a', 0 }, { 'b', 0 }, { 'c', 0 },  { 'd', 0 }, { 'e', 0 } };

    std::cout << "mOne contains: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    mOne.at('a') = 1;
    mOne.at('b') = 2;
    mOne.at('c') = 3;
    mOne.at('d') = 4;
    mOne.at('e') = 5;

    std::cout << "mOne now contains: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapBegin()
{
    std::cout << "std::map::begin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCbegin()
{
    std::cout << "std::map::cbegin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::const_iterator mIt = mOne.cbegin(); mIt != mOne.cend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCend()
{
    std::cout << "std::map::cend()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::const_iterator mIt = mOne.cbegin(); mIt != mOne.cend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapClear()
{
    std::cout << "std::map::clear()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    mOne.clear();

    std::cout << "mOne contents after clear:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCount()
{
    std::cout << "std::map::clear()" << std::endl;

    // This actually took an ungodly amount of time to write out. Never do this.
    std::map<char, int> mOne = { { 'a', 1 }, { 'd', 2 }, { 'f', 3 }, { 'j', 4 }, { 'i', 5 }, { 'l', 6 }, { 'o', 7 }, { 'r', 8 }, { 'u', 9 }, { 'x', 10 } };
    char a;

    for (a = 'a'; a < 'z'; ++a)
    {
        std::cout << "The key: " << a;

        if (mOne.count(a) > 0)
        {
            std::cout << " exists with value: " << mOne.at(a) << std::endl;
        }
        else
        {
            std::cout << " does not exist." << std::endl;
        }
    }
    std::cout << std::endl;
}

void mapCrbegin()
{
    std::cout << "std::map::crbegin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::const_reverse_iterator mIt = mOne.crbegin(); mIt != mOne.crend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCrend()
{
    std::cout << "std::map::crend()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::const_reverse_iterator mIt = mOne.crbegin(); mIt != mOne.crend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmplace()
{
    std::cout << "std::map::emplace()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 } };

    std::cout << "mOne contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
    
    mOne.emplace('b', 2);
    mOne.emplace('c', 3);

    std::cout << "mOne now contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmplace_hint()
{
    std::cout << "std::map::emplace_hint()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };
    std::map<char, int>::iterator mIt = mOne.begin();

    std::cout << "mOne contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    mIt = mOne.emplace_hint(mIt, 'd', 4);
    mOne.emplace_hint(mIt, 'e', 5);

    std::cout << "mOne now contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmpty()
{
    std::cout << "std::map::empty()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contains:" << std::endl;
    while (!mOne.empty())
    {
        std::cout << mOne.begin()->first << " maps to " << mOne.begin()->second << std::endl;
        mOne.erase(mOne.begin());
    }
    std::cout << std::endl;
}

void mapEnd()
{
    std::cout << "std::map::end()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapEqual_range()
{
    std::cout << "std::map::equal_range()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, { 'd', 4 }, { 'e', 5 } };
    std::pair<std::map<char, int>::iterator, std::map<char, int>::iterator> pOne;

    pOne = mOne.equal_range('c');

    std::cout << "The lower bound of pOne is " << pOne.first->first << " mapping to " << pOne.first->second << std::endl;
    std::cout << "The upper bound of pOne is " << pOne.second->first << " mapping to " << pOne.second->second << std::endl;

    std::cout << std::endl;
}

void mapErase()
{
    std::cout << "std:map::erase()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, { 'd', 4 }, { 'e', 5 } };
    std::map<char, int>::iterator mIt;

    std::cout << "Before erasing: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }

    mOne.erase('a');

    mIt = mOne.find('b');

    mOne.erase(mIt);

    mIt = mOne.find('d');

    mOne.erase(mIt, mOne.end());

    std::cout << "After erasing: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapFind()
{
    std::cout << "std::map::find()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, { 'd', 4 }, { 'e', 5 } };
    std::map<char, int>::iterator mIt;
    int i;

    mIt = mOne.find('c');

    if (mIt != mOne.end())
    {
        mOne.erase(mIt);
    }

    std::cout << "mOne contains: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapGet_allocator()
{
    std::cout << "std::map::get_allocator()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 }, { 'd', 4 }, { 'e', 5 } };
    std::map<char, int>::allocator_type mAT = mOne.get_allocator();
    std::pair<const char,int>* p;
    int psize;  

    p = mOne.get_allocator().allocate(5);

    psize = sizeof(std::map<char,int>::value_type)*5;

    std::cout << "The allocated array has a size of " << psize << " bytes.\n";

    mOne.get_allocator().deallocate(p,5);

    std::cout << std::endl;
}

void mapInsert()
{
    std::cout << "std::map::insert()" << std::endl;

    std::map<char,int> mOne;

    // first insert function version (single parameter):
    mOne.insert(std::pair<char,int>('a', 1));
    mOne.insert(std::pair<char,int>('z', 2));

    std::pair<std::map<char, int>::iterator, bool> pOne;

    pOne = mOne.insert(std::pair<char, int>('z', 5));
    if (pOne.second == false)
    {
        std::cout << "Element 'z' already existed with a value of " << pOne.first->second << std::endl;
    }

    // second insert function version (with hint position):
    std::map<char,int>::iterator mIt = mOne.begin();

    mOne.insert (mIt, std::pair<char,int>('b', 3));  // max efficiency inserting
    mOne.insert (mIt, std::pair<char,int>('c', 4));  // no max efficiency inserting

    // third insert function version (range insertion):
    std::map<char, int> mTwo;
    mTwo.insert(mOne.begin(), mOne.find('c'));

    // showing contents:
    std::cout << "mOne contains:\n";
    for (mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    std::cout << "mTwo contains:\n";
    for (mIt = mTwo.begin(); mIt!= mTwo.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    std::cout << std::endl;
}

void mapKey_comp()
{
    std::cout << "std::map::key_comp()" << std::endl;

    std::map<char, int> mOne;
    std::map<char, int>::key_compare mComp = mOne.key_comp();

    mOne['a'] = 1;
    mOne['b'] = 2;
    mOne['c'] = 3;

    std::cout << "mOne contains:" << std::endl;

    char highest = mOne.rbegin()->first;     // key value of last element

    std::map<char, int>::iterator mIt = mOne.begin();

    do
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    } while (mComp((*mIt++).first, highest));

    std::cout << std::endl;
}

void mapLower_bound()
{
    std::cout << "std::map::lower_bound()" << std::endl;

    std::map<char,int> mOne;
    std::map<char,int>::iterator mItLower, mItUpper;

    mOne['a'] = 1;
    mOne['b'] = 2;
    mOne['c'] = 3;
    mOne['d'] = 4;
    mOne['e'] = 5;

    mItLower = mOne.lower_bound('b');
    mItUpper = mOne.upper_bound('c');

    mOne.erase(mItLower, mItUpper);

    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << '\n';
    }

    std::cout << std::endl;
}

void mapMax_size()
{
    std::cout << "std::map::max_size()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 } , { 'c', 3 }, { 'd', 4 }, { 'e', 5 } };

    std::cout << "mOne has a maximum size of " << mOne.max_size() << " elements." << std::endl;

    std::cout << std::endl;
}

void mapOperatorEqualsSign()
{
    std::cout << "std::map::operator=" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 } };
    std::map<char, int> mTwo;

    std::cout << "mOne before =" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    std::cout << "mTwo before =" << std::endl;
    for (auto& x : mTwo)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    mTwo = mOne;

    std::cout << "mOne after =" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    std::cout << "mTwo after =" << std::endl;
    for (auto& x : mTwo)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }

    std::cout << std::endl;
}

void mapOperatorSquareBrackets()
{
    std::cout << "std::map::operator[]" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 } };

    std::cout << "mOne key 'a' maps to " << mOne['a'] << std::endl;

    std::cout << std::endl;
}

void mapRbegin()
{
    std::cout << "std::map::rbegin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::reverse_iterator mIt = mOne.rbegin(); mIt != mOne.rend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapRend()
{
    std::cout << "std::map::rend()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::reverse_iterator mIt = mOne.rbegin(); mIt != mOne.rend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapSize()
{
    std::cout << "std::map::size()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 } };

    std::cout << "mOne has a size of " << mOne.size() << " elements." << std::endl;

    std::cout << std::endl;
}

void mapSwap()
{
    std::cout << "std::map::swap()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 } };
    std::map<char, int> mTwo = { { 'a', 10 } };
    std::map<char, int>::iterator mIt;

    std::cout << "mOne contains:\n";
    for (mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    std::cout << "mTwo contains:\n";
    for (mIt = mTwo.begin(); mIt!= mTwo.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    mOne.swap(mTwo);

    std::cout << "mOne now contains:\n";
    for (mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    std::cout << "mTwo now contains:\n";
    for (mIt = mTwo.begin(); mIt!= mTwo.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    std::cout << std::endl;
}

void mapUpper_bound()
{
    std::cout << "std::map::upper_bound()" << std::endl;

    std::map<char,int> mOne;
    std::map<char,int>::iterator mItLower, mItUpper;

    mOne['a'] = 1;
    mOne['b'] = 2;
    mOne['c'] = 3;
    mOne['d'] = 4;
    mOne['e'] = 5;

    mItLower = mOne.lower_bound('b');
    mItUpper = mOne.upper_bound('c');

    mOne.erase(mItLower, mItUpper);

    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << '\n';
    }

    std::cout << std::endl;
}