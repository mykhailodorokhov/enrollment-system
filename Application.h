#pragma once

#include <string>
#include "Faculty.h"
#include "Applicant.h"

using namespace std;

class Application {
    Applicant applicant;
    Faculty faculty;
    int grade;
    bool result;

public:
    Application();

    void setApplicant(Applicant applicant);
    Applicant getApplicant();

    void setFaculty(Faculty faculty);
    Faculty getFaculty();

    void setGrade(int grade);
    int getGrade();

    void setResult(bool result);
    bool getResult();


};