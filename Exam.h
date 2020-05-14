#include <string>

using namespace std;

class Exam {
    string name;
    string* questions;
    string* answers;

public:
    Exam();

    void setName(string name);
    string getName();

    void setQuestions(string questions[]);
    string* getQuestions();

    void setAnswers(string answers[]);
    string* getAnswers();
};