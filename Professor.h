#pragma once

#include <string>

using namespace std;

class Professor {
    string name;

public:
    Professor();

    void setName(string name);
    string getName();
};