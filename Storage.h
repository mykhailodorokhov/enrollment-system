#include <iostream>
#include <fstream>
#include <sstream>

#include "Application.h"

class Storage {
    Faculty* faculties;
    Exam* exams;
    int facultiesCount;
    int examCount;
    int examQuestionsCount;

    Faculty* loadFacultiesData(string fileName);
    Exam* loadExamsData(string fileName);

public:
    Storage();

    Faculty* getFaculties();
    Exam* getExams();

    int getFacultiesCount();
    int getExamCount();
    int getExamQuestionsCount();

    void loadDataFromFiles(string facultiesFileName, string examsFileName);
};