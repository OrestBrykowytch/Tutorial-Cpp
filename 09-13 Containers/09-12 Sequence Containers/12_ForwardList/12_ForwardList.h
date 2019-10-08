#include <iostream>
#include <forward_list>
#include <utility>
#include <functional>

void creatingForward_lists()
{
    std::cout << "Basic forward_list setup: " << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo (5, 5);
    std::forward_list<int> flThree (flTwo.begin(), flTwo.end());
    std::forward_list<int> flFour (flThree);
    std::forward_list<int> flFive (std::move(flFour));

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flTwo contains:";
    for (std::forward_list<int>::iterator x = flTwo.begin(); x != flTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flThree contains:";
    for (std::forward_list<int>::iterator x = flThree.begin(); x != flThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flFour contains:";
    for (std::forward_list<int>::iterator x = flFour.begin(); x != flFour.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flFive contains:";
    for (std::forward_list<int>::iterator x = flFive.begin(); x != flFive.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flAssign()
{
    std::cout << "std::deque::assign()" << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo;
    std::forward_list<int> flThree;

    flOne.assign(5, 10);

    flTwo.assign(flOne.begin(), flOne.end());

    flThree.assign({1, 2, 3, 4, 5 });

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flTwo contains:";
    for (std::forward_list<int>::iterator x = flTwo.begin(); x != flTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flThree contains:";
    for (std::forward_list<int>::iterator x = flThree.begin(); x != flThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flBefore_Begin()
{
    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.insert_after(flOne.before_begin(), 10);

    std::cout << "flOne now contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flBegin()
{
    std::cout << "std::forward_list::begin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator flIt = flOne.begin(); flIt != flOne.end(); ++flIt)
    {
        std::cout << " " << *flIt;
    }
    std::cout << '\n' << std::endl;
}

void flCbefore_begin()
{
    std::cout << "std::forward_list::cbefore_begin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.insert_after(flOne.cbefore_begin(), 10);

    std::cout << "flOne now contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flCbegin()
{
    std::cout << "std::forward_list::cbegin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto x = flOne.cbegin(); x != flOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flCend()
{
    std::cout << "std::forward_list::cend()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto x = flOne.cbegin(); x != flOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flClear()
{
    std::cout << "std::forward_list::clear()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.clear();
    
    std::cout << "flOne now contains:";
    for (auto x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flEmplace_after()
{
    std::cout << "std::forward_list::emplace_after()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };
    std::forward_list<int>::iterator flIt = flOne.before_begin();

    flIt = flOne.emplace_after(flIt, 10);
    flIt = flOne.emplace_after(flIt, 20);

    std::cout << "flOne contains:";
    for(auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flEmplace_front()
{
    std::cout << "std::forward_list::emplace_front()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.emplace_front(10);

    std::cout << "flOne contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flEmpty()
{
    std::cout << "std::forward_list::empty()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };
    std::forward_list<int> flTwo;

    std::cout << "flOne " << (flOne.empty() ? "is empty." : "is not empty." ) << std::endl;
    std::cout << "flTwo " << (flTwo.empty() ? "is empty." : "is not empty." ) << '\n' << std::endl;
}

void flEnd()
{
    std::cout << "std::forward_list::end()" << std::endl;

    std::forward_list<int> flOne = { 10, 20, 30, 40 };

    std::cout << "flOne contains:";
    for (auto flIt = flOne.begin(); flIt != flOne.end(); ++flIt)
    {
        std::cout << " " << *flIt;
    }
    std::cout << '\n' << std::endl;
}

void flErase_after()
{
    std::cout << "std::forward_list::erase_after()" << std::endl;

    std::forward_list<int> flOne = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::forward_list<int>::iterator flIt = flOne.begin();

    std::cout << "flOne contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;
    
    flIt = flOne.erase_after(flIt);
    flIt = flOne.erase_after(flIt, flOne.end());

    std::cout << "flOne now contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flFront()
{
    std::cout << "std::forward_list::front()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.front() = 11;

    std::cout << "flOne now contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flGet_allocator()
{
    std::cout << "std::forward_list::get_allocator" << std::endl;

    std::forward_list<int> flOne;
    int* flIt;

    flIt = flOne.get_allocator().allocate(5);

    for (int x = 0; x < 5; ++x)
    {
        flOne.get_allocator().construct(&flIt[x], x + 1);
    }

    std::cout << "flOne contains:";
    for (int x = 0; x < 5; ++x)
    {
        std::cout << " " << flIt[x];
    }
    std::cout << '\n' << std::endl;

    for (int x = 0; x < 5; ++x)
    {
        flOne.get_allocator().destroy(&flIt[x]);
    }

    flOne.get_allocator().deallocate(flIt, 5);
}

void flInsert_after()
{
    std::cout << "std::forward_list::insert_after()" << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo = { 1, 2, 3, 4, 5 };
    std::forward_list<int>::iterator flIt;

    flIt = flOne.insert_after(flOne.before_begin(), 10);
    flIt = flTwo.insert_after(flIt, 2, 20);
    
    std::cout << "flOne before transfer:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo before transfer:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flIt = flOne.insert_after(flOne.before_begin(), flTwo.begin(), flTwo.end());

    std::cout << "flOne post insertion:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo post insertion:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flMax_size()
{
    std::cout << "std::forward_list::max_size()" << std::endl;

    std::forward_list<int> flOne;

    std::cout << flOne.max_size() << '\n' << std::endl;
}

void flMerge()
{
    std::cout << "std::forward_list::merge()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };
    std::forward_list<int> flTwo = { 10, 20, 30, 40, 50 };
    std::forward_list<int> flThree = { 100, 200, 300, 400, 500 };

    std::cout << "flOne pre-changes:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo pre-changes:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flThree pre-changes:";
    for (auto& x : flThree)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.merge(flTwo);

    std::cout << "flOne post-change 1:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo post-change 1:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flThree post-change 1:";
    for (auto& x : flThree)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.merge(flThree, std::greater<int>());

    std::cout << "flOne post-change 2:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo post-change 2:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flThree post-change 2:";
    for (auto& x : flThree)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flOperatorEqualsSign()
{
    std::cout << "std::forward_list::operator=" << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo = { 1, 2, 3, 4, 5 };

    std::cout << "flOne before assignment:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo before assignment:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne = flTwo;

    std::cout << "flOne after assignment:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    std::cout << "flTwo after assignment:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flPop_front()
{
    std::cout << "std::forward_list::pop_front()" << std::endl;

    std::forward_list<int> flOne = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    while (!flOne.empty())
    {
        std::cout << flOne.front() << " ";
        flOne.pop_front();
    }
    std::cout << '\n' << std::endl;
}

void flPush_front()
{
    std::cout << "std::forward_list::push_front()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne before push_front():";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.push_front(10);
    flOne.push_front(20);
    flOne.push_front(30);

    std::cout << "flOne after push_front():";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flRemove()
{
    std::cout << "std::forward_list::remove()" << std::endl;

    std::forward_list<int> flOne = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    std::cout << "flOne before removal:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }

    std::cout << std::endl;

    flOne.remove(3);

    std::cout << "flOne after removal:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flResize()
{
    std::cout << "std::forward_list::resize()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne before resize:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.resize(3);

    std::cout << "flOne after resize 1:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;
    
    flOne.resize (5, 10);

    std::cout << "flOne after resize 2:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flReverse()
{
    std::cout << "std::forward_list::reverse()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne before reverse:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.reverse();

    std::cout << "flOne after reverse:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flSort()
{
    std::cout << "std::forward_list::sort()" << std::endl;

    std::forward_list<int> flOne = { 3, 4, 2, 1, 5 };

    std::cout << "flOne before sort:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.sort();

    std::cout << "flOne after sort:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flSplice_after()
{
    std::cout << "std::forward_list::splice_after()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };
    std::forward_list<int> flTwo = { 10, 20, 30, 40, 50 };
    std::forward_list<int>::iterator flIt = flOne.begin();

    std::cout << "flOne before splice:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.sort();

    std::cout << "flTwo before splice:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.splice_after(flOne.before_begin(), flTwo);
    flTwo.splice_after(flTwo.before_begin(), flOne, flOne.begin(), flIt);
    flOne.splice_after(flOne.before_begin(), flTwo, flTwo.begin());

    std::cout << "flOne after splice:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.sort();

    std::cout << "flTwo after splice:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flSwap()
{
    std::cout << "std::forward_list::swap()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };
    std::forward_list<int> flTwo = { 10, 20, 30, 40, 50 };

    std::cout << "flOne before swap:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.sort();

    std::cout << "flTwo before swap:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.swap(flTwo);

    std::cout << "flOne after swap:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.sort();

    std::cout << "flTwo after swap:";
    for (auto& x : flTwo)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}

void flUnique()
{
    std::cout << "std::forward_list::unique()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5, 5 };
    int x;

    std::cout << "flOne contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;

    flOne.unique();

    std::cout << "flOne now contains:";
    for (auto& x : flOne)
    {
        std::cout << " " << x;
    }
    std::cout << '\n' << std::endl;
}