#include "Professor.h"

Professor::Professor() {
    this->name = "";
}

void Professor::setName(string name) {
    this->name = name;
}

string Professor::getName() {
    return this->name;
}