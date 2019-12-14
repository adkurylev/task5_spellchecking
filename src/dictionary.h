#ifndef  _DICTIONARY_H_
#define  _DICTIONARY_H_

#include  <iostream>
#include  <vector>
#include  <list>
#include  <algorithm>
#include  <string>
#include  <stdlib.h>
#include  <math.h>

#include  "hashset.h"
#include  "hashset.cpp"

class hash_function
{
public:
    unsigned int operator()(const std::string& s) const
    {
        int res = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            res += (int) s[i] * pow(3, i);
        }

        return res;
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
public:
    Dictionary(std::string filename);
};

#endif // _DICTIONARY_H_
