#include <iostream>

#include "Storage.h"
#include "EnrollmentEngine.h"

const string EXAMS_FILENAME = "exams.txt";
const string FACULTIES_FILENAME = "faculties.txt";

int main() {
    cout << "Facutly and Exam data loading started..." << endl;

    // Reading faculties and exams data from file
    Storage storage;
    storage.loadDataFromFiles(FACULTIES_FILENAME, EXAMS_FILENAME);

    Faculty* faculties = storage.getFaculties();

    cout << "Loading complete!" << endl;

    // Asking how many examination sessions going to be
    cout << "Enter number of applicatins for passing entrance exams:" << endl;
    int applicantCount;
    cin >> applicantCount;

    Application* applications = new Application[applicantCount];
    for (int a = 0; a < applicantCount; a++) {
        cout << endl << "EXAMINATION SESSION n." << (a + 1) << endl << endl;

        //
        // Entering applicant's info
        //
        Applicant applicant;

        cout << "Enter your surname" << endl;
        string applicantSurname;
        cin >> applicantSurname;

        applicant.setName(applicantSurname);

        //
        // Choosing faculty
        //
        cout << "Which faculty you wish to apply for?" << endl;

        int facultiesCount = storage.getFacultiesCount();
        for (int f = 0; f < facultiesCount; f++) {
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

        int examQuestionsCount = exam.getQuestionsCount();

        string *questions = exam.getQuestions();
        string *applicantAnswers = new string[examQuestionsCount];
        for (int q = 0; q < examQuestionsCount; q++) {
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
        applications[a].setApplicant(&applicant);
        applications[a].setFaculty(&chosenFaculty);
        applications[a].setGrade(grade);
    }

    //
    // Evaluating applications for enrollment to the university
    //
    EnrollmentEngine enrollmentEngine;
    enrollmentEngine.processApplications(applications, applicantCount, faculties, storage.getFacultiesCount());

    //
    // Displaying enrollment results
    //
    cout << endl;
    cout << "ENROLLMENT RESULTS" << endl << endl;
    cout << "Applicant, Faculty, Accepted/Rejected" << endl;
    for (int a = 0; a < applicantCount; a++) {
        string applicantName = applications[a].getApplicant().getName();
        string facultyName = applications[a].getFaculty().getName();
        string result = applications[a].getResult()?"ACCEPTED":"REJECTED";

        cout << applicantName << ", " << facultyName << " - " << result << endl;
    }

    cout << endl;
    cout << "Thank you for using Enrollment System v1.0!" << endl;
    cout << "Oleksandr Shnurenko" << endl;
    return 0;
}