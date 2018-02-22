#include <algorithm> //copy
#include <iostream>
#include <iterator> //back_inserter
#include <string>
#include <vector>

#include "split.h"

int main() {
    std::cout << "Enter string to split into individual words: ";
    std::string s;
    std::vector<std::string> splitWords;

    // Read one line at a time, passing it to split, which will return a vector separating the line by each space
    while (getline(std::cin, s)){
        std::vector<std::string> temp = split(s);
        copy(temp.begin(), temp.end(), back_inserter(splitWords));
    }

    // print each word on a new line
    for (std::vector<std::string>::size_type i = 0; i != splitWords.size(); ++i)
        std::cout << splitWords[i] << std::endl;

    return 0;
}
