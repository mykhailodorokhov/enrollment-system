#include "Enrollee.h"

Enrollee::Enrollee(string name) {
    this->name = name;
}

string Enrollee::getName() {
    return this->name;
}