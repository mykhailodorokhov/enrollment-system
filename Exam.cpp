#include "Exam.h"

const int DEFAULT_GRADING_SCALE = 100;

Exam::Exam() {
    this->name = "";
    this->questionsCount = 0;
}

void Exam::setName(string name) { this->name = name; }
string Exam::getName() { return this->name; }

void Exam::setQuestionsCount(int questionsCount) { this->questionsCount = questionsCount; }
int Exam::getQuestionsCount() { return this->questionsCount; }

void Exam::setQuestions(string* questions) { this->questions = questions; }
string* Exam::getQuestions() { return this->questions; }

void Exam::setAnswers(string* answers) { this->answers = answers; }
string* Exam::getAnswers() { return this->answers; }

int Exam::checkAnswersAndGrade(string answersToCheck[]) {
    return this->checkAnswersAndGrade(answersToCheck, DEFAULT_GRADING_SCALE);
}

int Exam::checkAnswersAndGrade(string answersToCheck[], int gradingScale) {
    int correctAnswers = 0;
    for(int q = 0; q < this->questionsCount; q++) {
        if (!answersToCheck[q].compare(this->answers[q])) {
            correctAnswers++;
        }
    }

    int grade = (int)((correctAnswers / (double)this->questionsCount) * gradingScale);
    return grade;
}