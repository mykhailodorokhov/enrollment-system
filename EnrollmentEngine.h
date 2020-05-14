#include "Application.h"

using namespace std;

class EnrollmentEngine {
    int facultyIndex(string element, Faculty array[], int size);

public:
    EnrollmentEngine();

    void processApplications(Application* applications, int applicationsCount, Faculty* faculties, int facultiesCount);
};