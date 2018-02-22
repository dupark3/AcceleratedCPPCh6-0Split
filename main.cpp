#include <iostream>
#include <string>

int main() {
    std::cout << "Enter string to split into individual words: ";
    std::string s;
    while (getline(std::cin, s)){
        std::vector<std::string> splitWords = split(s);

        for (std::vector<std::string>::size_type i = 0; i != splitWords.size(); ++i)
            std::cout << splitWords[i] << std::endl;
    }

    return 0;
}
