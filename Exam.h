#include <string>

using namespace std;

class Exam {
    string name;
    int questionsCount;
    string* questions;
    string* answers;

public:
    Exam();

    void setName(string name);
    string getName();

    void setQuestionsCount(int questionsCount);
    int getQuestionsCount();

    void setQuestions(string questions[]);
    string* getQuestions();

    void setAnswers(string answers[]);
    string* getAnswers();

    int checkAnswersAndGrade(string answersToCheck[]);
    int checkAnswersAndGrade(string answersToCheck[], int gradingScale);
};