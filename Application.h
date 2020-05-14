#include <string>
#include "Faculty.h"
#include "Enrollee.h"

using namespace std;

class Application {
    Enrollee* enrollee;
    Faculty* faculty;
    int grade;
    bool result;

public:
    Application(Enrollee* enrollee, Faculty* faculty, int grade);

    Enrollee* getEnrollee();
    Faculty* getFaculty();

    int getGrade();

    void setResult(bool result);
    bool getResult();


};