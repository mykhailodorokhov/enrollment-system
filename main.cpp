#include <iostream>

#include "Storage.h"
#include "EnrollmentEngine.h"
#include "InterfaceController.h"

const string EXAMS_FILENAME = "exams.txt";
const string FACULTIES_FILENAME = "faculties.txt";

int main() {
    // Initializing classes
    Storage storage;
    InterfaceController interfaceController;
    EnrollmentEngine enrollmentEngine;

    cout << "Facutly and Exam data loading started..." << endl;

    // Reading faculties and exams data from file
    storage.loadDataFromFiles(FACULTIES_FILENAME, EXAMS_FILENAME);

    Faculty* faculties = storage.getFaculties();

    cout << "Loading complete!" << endl;

    // Asking how many examination sessions going to be
    cout << "Enter number of applicatins for passing entrance exams:" << endl;
    int applicantCount;
    cin >> applicantCount;

    //
    // Running examination UI
    //
    Application* applications = interfaceController.takeExaminations(applicantCount, faculties, storage.getFacultiesCount());

    //
    // Evaluating applications for enrollment to the university
    //
    enrollmentEngine.processApplications(applications, applicantCount, faculties, storage.getFacultiesCount());

    //
    // Displaying enrollment results
    //
    interfaceController.showEnrollmentResults(applications, applicantCount);

    cout << endl;
    cout << "Thank you for using Enrollment System v1.0!" << endl;
    cout << "Oleksandr Shnurenko" << endl;
    return 0;
}