#include "header.hpp"

void plusesDeleter(std::vector<int>& arr)
{
    std::vector<int> ans;
    for (auto i : arr) if (i <= 0) ans.push_back(i);
    arr = std::move(ans);
}