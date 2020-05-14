#include "Exam.h"

Exam::Exam() {
    this->name = "";
    this->questions = nullptr;
    this->answers = nullptr;
}

void Exam::setName(string name) {
    this->name = name;
}

string Exam::getName() {
    return this->name;
}

void Exam::setQuestions(string questions[]) {
    this->questions = questions;
}

string* Exam::getQuestions() {
    return this->questions;
}

void Exam::setAnswers(string *answers) {
    this->answers = answers;
}

string* Exam::getAnswers() {
    return this->answers;
}