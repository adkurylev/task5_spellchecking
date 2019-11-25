#include <iostream>
#include <fstream>
#include <string>
#include "dictionary.h"

Dictionary::Dictionary(std::string filename)
{
    std::ifstream file(filename);
    std::string word;

    if (!file.good())
        throw std::invalid_argument("File does not exist.");

    while(!file.eof())
    {
        file >> word;
        insert(word);
    }
}
