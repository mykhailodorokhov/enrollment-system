#include "Applicant.h"

Applicant::Applicant() {
    this->name = "";
}

void Applicant::setName(string name) { this->name = name; }
string Applicant::getName() { return this->name; }