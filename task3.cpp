#include "header.hpp"

int wordsCounter(const std::string& str)
{
    std::vector <std::string> arr = split(str);
    return arr.size();
}