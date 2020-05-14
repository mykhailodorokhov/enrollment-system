#include "Exam.h"

Exam::Exam(string name, string questions[], string answers[]) {
    this->name = name;
    this->questions = questions;
    this->answers = answers;
}

string Exam::getName() {
    return this->name;
}

string * Exam::getQuestions() {
    return this->questions;
}

string * Exam::getAnswers() {
    return this->answers;
}