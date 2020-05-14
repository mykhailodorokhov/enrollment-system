#include <iostream>
#include <fstream>
#include <sstream>

#include "Application.h"

int main() {
    Enrollee* enrollee1 = new Enrollee("Lesha Osen");

    // File Manager
    // LoadData

    //
    // loading exams
    //
    ifstream examsStream;
    examsStream.open("exams.txt");

    int examsCount;
    examsStream >> examsCount;

    Exam* exams[examsCount];
    for (int i = 0; i < examsCount; i++)
    {
        string line;
        getline(examsStream, line, ';');

        stringstream streamLine(line + ',');

        // Reading exam name
        string examName;
        getline(streamLine, examName, ',');

        // Reading
        string questions[5];
        string answers[5];
        for(int j=0, q = 0, a = 0; j<=10; j++) {
            string column;
            getline(streamLine, column, ',');

            std::cout << column << std::endl; // debug
            if(j%2 != 0) {
                answers[q] = column;
                q++;
            } else {
                questions[a] = column;
                a++;
            }
        }

        exams[i] = new Exam(examName, questions, answers);

        //debug
        for(int j = 0; j<5; j++) {
            std::cout << exams[i]->getQuestions()[j] << " --- " << exams[i]->getAnswers()[j] << std::endl; // debug
        }
    }

    //
    // loading faculties and professors
    //
    ifstream facultiesStream;
    facultiesStream.open("faculties.txt");

    int facultiesCount;
    facultiesStream >> facultiesCount;

    Faculty* faculties[facultiesCount];
    for (int i = 0; i < facultiesCount; i++)
    {
        string line;
        getline(facultiesStream, line, ';');

        string facultyName;
        string responsibleProfessor;
        string examName;

        stringstream streamLine(line);
        getline(streamLine, facultyName, ',');
        getline(streamLine, responsibleProfessor, ',');
        getline(streamLine, examName);

        Professor* professor = new Professor(responsibleProfessor);

        Exam* entranceExam;
        for(int i = 0; i < examsCount; i++) {
            if (examName.compare(exams[i]->getName())) {
                entranceExam = exams[i];
            }

            std::cout << examName.compare(exams[i]->getName()) << " <-- " << examName << " AND " << exams[i]->getName() << std::endl; // debug
        }

        faculties[i] = new Faculty(facultyName, entranceExam, professor);


    }

    // Debug
    std::cout << facultiesCount << " " << faculties[0]->getName() << std::endl;





    //faculty1->setEntranceExam(exam1);
    //Application* application1 = new Application(enrollee1, faculty1, 90);



    return 0;
}


/*
exams.txt
History exam, sdfsdf,werwer,werwer,werwer,END
Math exam, sdfsdf,werwer,werwer,werwer,END
Chemistry exam, sdfsdf,werwer,werwer,werwer,END
0 1 2 3 4 5 6 7 8 9 10
f q a

q 1 3 5 7 9
a 2 4 6 8 10

faculties.txt
2
History faculty, Vasiliy
History faculty, Vasiliy
 */