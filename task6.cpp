#include "header.hpp"

int diffWordsCounter(const std::string& str)
{
    std::string s = ToLower(str);
    std::vector <std::string> arr = split(s);
    std::unordered_set <std::string> t(arr.begin(), arr.end());
    return t.size();
}