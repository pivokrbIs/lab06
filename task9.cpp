#include "header.hpp"

void Sort(std::list<int>& arr)
{
    for (auto i = arr.begin();i != arr.end();i++)
    {
        for (auto j = i;j != arr.end();j++)
        {
            if (*i < *j) std::swap(*i, *j);
        }
    }
}