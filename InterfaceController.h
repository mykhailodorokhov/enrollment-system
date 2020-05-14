#include "Application.h"

using namespace std;

class InterfaceController {
public:
    InterfaceController();

    Application* takeExaminations(int applicantCount, Faculty faculties[], int facultiesCount);
    void showEnrollmentResults(Application applications[], int applicantCount);
};