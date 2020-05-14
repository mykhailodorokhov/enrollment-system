#include <iostream>
#include "Professor.h"
#include "Exam.h"

using namespace std;

class Faculty {
    string name;
    Exam entranceExam;
    Professor responsibleProfessor;

public:
    Faculty();

    void setName(string name);
    string getName();

    void setEntranceExam(Exam* entranceExam);
    Exam getEntranceExam();

    void setResponsibleProfessor(Professor* responsibleProfessor);
    Professor getResponsibleProfessor();
};