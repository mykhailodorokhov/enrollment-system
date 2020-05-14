#include <string>
#include "Professor.h"
#include "Exam.h"

using namespace std;

class Faculty {
    string name;
    Professor* responsibleProfessor;
    Exam* entranceExam;
public:
    Faculty();
    Faculty(string name, Exam* entranceExam, Professor* responsibleProfessor);
    string getName();
    void setEntranceExam(Exam* entranceExam);
    Exam* getEntranceExam();
    Professor* getResponsibleProfessor();
};