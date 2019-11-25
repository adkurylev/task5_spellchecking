#ifndef  _DICTIONARY_H_
#define  _DICTIONARY_H_

#include  <iostream>
#include  <vector>
#include  <list>
#include  <algorithm>
#include  <string>
#include  <stdlib.h>

#include  "hashset.h"
#include  "hashset.cpp"

class hash_function
{
public:
    unsigned int operator()(const std::string& s) const
    {
        //TODO: Complete definition
    }
};

class equality
{
public:
    equality()
    {}

    bool operator()(const std::string& A, const std::string& B) const
    {
        return (A == B);
    }
};

class Dictionary : public HashSet<std::string, hash_function, equality>
{
    //TODO: Complete definition
public:
    Dictionary(std::string filename);

};

#endif // _DICTIONARY_H_
