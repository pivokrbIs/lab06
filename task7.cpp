#include "header.hpp"

void reverseNum(std::list<int>& l)
{
    std::list<int> t;

    for (auto i : l)
    {
        t.push_back(-i);
        t.push_back(i);
    }

    l = std::move(t);
}