#ifndef LAB06_HEADER_HPP
#define LAB06_HEADER_HPP

#endif //LAB06_HEADER_HPP

#include <iostream>
#include "bits/stdc++.h"

std::vector<std::string> split(const std::string&);
std::string ToLower(const std::string& str);

//task1, task2
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);

//task3
int wordsCounter(const std::string& str);

//task4
std::map<std::string, int> wordsMapCounter(const std::string& str);

//task5
std::vector<std::string> uniqueWords(const std::string& str);

//task6
int diffWordsCounter(const std::string& str);

//task7
void reverseNum(std::list<int>& l);

//task8
void plusesDeleter(std::vector<int>& arr);

//task9
void Sort(std::list<int>& arr);