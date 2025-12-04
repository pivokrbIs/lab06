#include "header.hpp"

std::vector<std::string> uniqueWords(const std::string& str)
{
    std::string s = ToLower(str);
    std::vector<std::string> arr = split(s);
    std::unordered_set<std::string> t(arr.begin(), arr.end());
    std::vector<std::string> ans;
    copy(t.begin(),t.end(), std::back_inserter(ans));
    return ans;
}