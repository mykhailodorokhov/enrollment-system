#include "Storage.h"

Storage::Storage() {
    this->exams = nullptr;
    this->faculties = nullptr;
    this->facultiesCount = 0;
    this->examCount = 0;
    this->examQuestionsCount = 0;
}

Faculty * Storage::getFaculties() { return this->faculties; }
Exam * Storage::getExams() { return this->exams; }

int Storage::getFacultiesCount() { return this->facultiesCount; }
int Storage::getExamCount() { return this->examCount; }
int Storage::getExamQuestionsCount() { return this->examQuestionsCount; }

void Storage::loadDataFromFiles(string facultiesFileName, string examsFileName) {
    this->exams = loadExamsData(examsFileName);
    this->faculties = loadFacultiesData(facultiesFileName);
}

Exam* Storage::loadExamsData(string fileName) {
    ifstream examsStream;
    examsStream.open(fileName);

    int examsCount, examQuestionsCount;
    examsStream >> examsCount >> examQuestionsCount;

    // assigning examsCount and examQuestionsCount to object variables;
    this->examCount = examsCount;
    this->examQuestionsCount = examQuestionsCount;

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
        string* questions = new string[examQuestionsCount];
        string* answers = new string[examQuestionsCount];
        for(int j=0, q = 0, a = 0; j<examQuestionsCount*2; j++) {
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
        exams[i].setQuestionsCount(examQuestionsCount);
        exams[i].setQuestions(questions);
        exams[i].setAnswers(answers);
    }

    return exams;
}

Faculty* Storage::loadFacultiesData(string fileName) {
    ifstream facultiesStream;
    facultiesStream.open(fileName);

    int facultiesCount;
    facultiesStream >> facultiesCount;

    // assigning facultiesCount to the object variable;
    this->facultiesCount = facultiesCount;

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