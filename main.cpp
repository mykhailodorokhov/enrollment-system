#include <iostream>
#include <fstream>
#include <sstream>

#include "FileManager.h"

const string EXAMS_FILENAME = "exams.txt";
const int EXAM_QUESTION_COUNT = 5;

const string FACULTIES_FILENAME = "faculties.txt";

int main() {
    cout << "Facutly and Exam data loading started...";

    FileManager fileManager;
    fileManager.loadData(FACULTIES_FILENAME, EXAMS_FILENAME, EXAM_QUESTION_COUNT);

    Faculty* faculties = fileManager.getFaculties();
    Exam* exams = fileManager.getExams();

    cout << "Loading complete!";

    // Example of creating an enrollee and his application
    Enrollee* enrollee1 = new Enrollee("Lesha Osen");
    Application* application1 = new Application(enrollee1, &faculties[0], 90);

    return 0;
}