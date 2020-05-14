#include "Faculty.h"

Faculty::Faculty() {
    this->name = "";
    this->entranceExam = nullptr;
    this->responsibleProfessor = nullptr;
}

void Faculty::setName(string name) {
    this->name = name;
}

string Faculty::getName() {
    return this->name;
}

void Faculty::setEntranceExam(Exam* entranceExam) {
    this->entranceExam = entranceExam;
}

Exam * Faculty::getEntranceExam() {
    return this->entranceExam;
}

void Faculty::setResponsibleProfessor(Professor* responsibleProfessor) {
    this->responsibleProfessor = responsibleProfessor;
}

Professor * Faculty::getResponsibleProfessor() {
    return this->responsibleProfessor;
}