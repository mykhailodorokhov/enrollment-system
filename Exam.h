#include <string>

using namespace std;

class Exam {
    string name;
    string* questions;
    string* answers;
public:
    Exam();
    Exam(string name, string questions[], string answers[]);
    string getName();
    string* getQuestions();
    string* getAnswers();
};