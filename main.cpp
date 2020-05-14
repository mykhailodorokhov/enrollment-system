#include <iostream>
#include <fstream>
#include <sstream>

#include "Storage.h"

const string EXAMS_FILENAME = "exams.txt";
const string FACULTIES_FILENAME = "faculties.txt";

int main() {
    cout << "Facutly and Exam data loading started..." << endl;

    Storage storage;
    storage.loadDataFromFiles(FACULTIES_FILENAME, EXAMS_FILENAME);

    Faculty* faculties = storage.getFaculties();

    cout << "Loading complete!" << endl;

    cout << "Enter number of applicatins for passing entrance exams:" << endl;
    int applicantCount;
    cin >> applicantCount;

    Applicant* applicants = new Applicant[applicantCount];
    Application* applications = new Application[applicantCount];
    for(int a = 0; a < applicantCount; a++) {
        cout << endl << "EXAMINATION SESSION n." << (a + 1) << endl << endl;

        //
        // Entering student's info
        //
        cout << "Enter your surname" << endl;
        string applicantSurname;
        cin >> applicantSurname;

        applicants[a].setName(applicantSurname);

        //
        // Choosing faculty
        //
        cout << "Which faculty you wish to apply for?" << endl;

        int facultiesCount = storage.getFacultiesCount();
        for(int f = 0; f < facultiesCount; f++) {
            string facultyName = faculties[f].getName();
            int facultyNumber = f + 1;
            cout << "[" << facultyNumber << "] " << facultyName << endl;
        }

        int chosenFacultyNumber;
        cin >> chosenFacultyNumber;
        Faculty chosenFaculty = faculties[chosenFacultyNumber - 1];

        //
        // Starting examination
        //
        cout << endl;
        cout << "We are about to start examinaton... Dont worry and good luck!" << endl;
        cout << "Sincerely yours, professor " << chosenFaculty.getResponsibleProfessor().getName() << endl;

        Exam exam = chosenFaculty.getEntranceExam();

        cout << endl << "Exam: " << exam.getName() << endl;

        int examQuestionsCount = storage.getExamQuestionsCount();

        string* questions = exam.getQuestions();
        string* applicantAnswers = new string[examQuestionsCount];
        for(int q = 0; q < examQuestionsCount; q++) {
            cout << endl;
            cout << "Question n." << q + 1 << ": " << questions[q] << endl;
            cout << "(please provide your answer below, 1 word and 1 number only)" << endl;
            cin >> applicantAnswers[q];
        }

        //
        // Grading exam
        //
        int grade = exam.checkAnswersAndGrade(applicantAnswers);

        cout << endl;
        cout << "Exam session been completed! Your grade: " << grade << endl;

        //
        // Filling in application.
        //
        applications[a].setApplicant(&applicants[a]);
        applications[a].setFaculty(&chosenFaculty);
        applications[a].setGrade(grade);
    }

    // TODO: Ranking

    return 0;
}