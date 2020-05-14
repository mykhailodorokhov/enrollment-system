#include "Faculty.h"

Faculty::Faculty() {

}

Faculty::Faculty(string name, Exam* entraceExam, Professor* responsibleProfessor) {
    this->name = name;
    this->entranceExam = entraceExam;
    this->responsibleProfessor = responsibleProfessor;
}

string Faculty::getName() {
    return this->name;
}

void Faculty::setEntranceExam(Exam *entranceExam) {
    this->entranceExam = entranceExam;
}

Exam * Faculty::getEntranceExam() {
    return this->getEntranceExam();
}