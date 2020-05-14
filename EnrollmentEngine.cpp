#include "EnrollmentEngine.h"

EnrollmentEngine::EnrollmentEngine() { }

int EnrollmentEngine::facultyIndex(string facultyName, Faculty array[], int size)
{
    for(int i = 0; i<size; i++) {
        if(!array[i].getName().compare(facultyName)) return i;
    }

    return -1;
}

void EnrollmentEngine::processApplications(Application *applications, int applicationsCount, Faculty* faculties, int facultiesCount) {
    int* enrollmentGradeForFaculty = new int [facultiesCount];

    //
    // Calculating average grade for every faculty
    //
    for (int f = 0; f < facultiesCount; f++) {
        string facultyName = faculties[f].getName();

        int gradeSum = 0;
        for (int a = 0; a < applicationsCount; a++) {
            string facultyInApplication = applications[a].getFaculty().getName();

            // counting only application of our faculty
            if (!facultyInApplication.compare(facultyName)) {
                gradeSum += applications[a].getGrade();
            }
        }
        int averageGrade = (int) gradeSum / (double) applicationsCount;

        enrollmentGradeForFaculty[f] = averageGrade;
    }

    //
    // Processing applications
    //
    for (int a = 0; a < applicationsCount; a++) {
        string facultyName = applications[a].getFaculty().getName();
        int facultyIndex = this->facultyIndex(facultyName, faculties, facultiesCount);
        int gradeForEnrollment = enrollmentGradeForFaculty[facultyIndex];

        if(applications[a].getGrade() >= gradeForEnrollment)
            applications[a].setResult(true);
        else
            applications[a].setResult(false);
    }
}

