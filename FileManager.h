#include <iostream>
#include <fstream>
#include <sstream>

#include "Application.h"

class FileManager {
    Faculty* faculties;
    Exam* exams;
    int examCount;

    Faculty* loadFacultiesData(string fileName);
    Exam* loadExamsData(string fileName, int questionsCount);

public:
    FileManager();

    void loadData(string facultiesFileName, string examsFileName, int questionsCount);

    Faculty* getFaculties();
    Exam* getExams();
};