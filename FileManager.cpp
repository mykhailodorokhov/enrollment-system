#include "FileManager.h"

FileManager::FileManager() {
    this->exams = nullptr;
    this->faculties = nullptr;
}

Faculty * FileManager::getFaculties() {
    return this->faculties;
}

Exam * FileManager::getExams() {
    return this->exams;
}

void FileManager::loadData(string facultiesFileName, string examsFileName, int questionsCount) {
    this->exams = loadExamsData(examsFileName, questionsCount);
    this->faculties = loadFacultiesData(facultiesFileName);
}

Exam* FileManager::loadExamsData(string fileName, int questionsCount) {
    ifstream examsStream;
    examsStream.open(fileName);

    int examsCount;
    examsStream >> examsCount;

    // putting examsCount to an object variable;
    this->examCount = examsCount;

    Exam* exams = new Exam[examsCount];
    for (int i = 0; i < examsCount; i++)
    {
        string line;
        getline(examsStream, line, ';');

        // first character is endl, erasing it
        line.erase(0,1);

        stringstream streamLine(line + ',');

        // Reading exam name
        string examName;
        getline(streamLine, examName, ',');

        // Reading questions and answers of the exam
        string questions[questionsCount];
        string answers[questionsCount];
        for(int j=0, q = 0, a = 0; j<=questionsCount*2; j++) {
            string column;
            getline(streamLine, column, ',');

            if(j%2 != 0) {
                answers[q] = column;
                q++;
            } else {
                questions[a] = column;
                a++;
            }
        }

        exams[i].setName(examName);
        exams[i].setQuestions(questions);
        exams[i].setAnswers(answers);
    }

    return exams;
}

Faculty* FileManager::loadFacultiesData(string fileName) {
    ifstream facultiesStream;
    facultiesStream.open(fileName);

    int facultiesCount;
    facultiesStream >> facultiesCount;

    Faculty* faculties = new Faculty [facultiesCount];
    for (int i = 0; i < facultiesCount; i++)
    {
        string line;
        getline(facultiesStream, line, ';');

        // first character is endl, erasing it
        line.erase(0,1);

        string facultyName;
        string responsibleProfessorName;
        string examName;

        stringstream streamLine(line);
        getline(streamLine, facultyName, ',');
        getline(streamLine, responsibleProfessorName, ',');
        getline(streamLine, examName);

        Professor responsibleProfessor;
        responsibleProfessor.setName(responsibleProfessorName);

        Exam entranceExam;
        for(int i = 0; i < this->examCount; i++) {
            if (!examName.compare(this->exams[i].getName())) {
                entranceExam = this->exams[i];
            }
        }

        faculties[i].setName(facultyName);
        faculties[i].setEntranceExam(&entranceExam);
        faculties[i].setResponsibleProfessor(&responsibleProfessor);
    }

    return faculties;
}