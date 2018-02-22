#include <algorithm> // find_if
#include <cctype> //isspace
#include <string>
#include <vector>

#include "split.h"

typedef std::string::const_iterator string_iter;

bool notSpace (const char& c){
    return !isspace(c);
}

bool space (const char& c){
    return isspace(c);
}

std::vector<std::string> split(const std::string& line){
    std::vector<std::string> ret;
    string_iter i = line.begin();

    // Use two iterators and space/notspace predicate to delimit a word
    while (i != line.end()){
        std::find_if(i, line.end(), notSpace); // i now points at the first non-space char
        string_iter j = std::find_if(i, line.end(), space); // j now points at the next space char
        if (i != line.end())
            ret.push_back(std::string(i, j));
        i = j;
    }

    return ret;
}
