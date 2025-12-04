#include "header.hpp"


std::vector<std::string> split(const std::string& str)
{
    std::vector<std::string> arr;
    std::string s = "";
    for (int i  = 0;i < str.length();i++)
    {
        if (str[i] == ' ' or str[i] == ',' or str[i] == '.') {arr.push_back(s); s = ""; }
        else {s += str[i];}
    }
    if (s != "") arr.push_back(s);
    return arr;
}

std::string ToLower(const std::string& str)
{
    std::string ans = "";
    for (auto i : str) ans += tolower(i);
    return ans;
}