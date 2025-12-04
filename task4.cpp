#include "header.hpp"

std::map<std::string, int> wordsMapCounter(const std::string& str)
{
    std::string s = ToLower(str);
    std::vector <std::string> arr = split(s);
    std::map<std::string, int> ans;
    for (auto i : arr)
    {
        if (ans.count(i) == 0) ans.insert({i,1});
        else ans[i]++;
    }
    return ans;
}