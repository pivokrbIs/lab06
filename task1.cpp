#include "header.hpp"

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el)
{
    auto it = first;

    while (it != last)
    {
        if (*it == el) return it;
        it++;
    }
    return last;
}