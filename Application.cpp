#include "Application.h"

Application::Application(Enrollee *enrollee, Faculty *faculty, int grade) {
    this->enrollee = enrollee;
    this->faculty = faculty;
    this->grade = grade;
}

Enrollee * Application::getEnrollee() {
    return this->enrollee;
}

Faculty * Application::getFaculty() {
    return this->faculty;
}

int Application::getGrade() {
    return this->grade;
}

void Application::setResult(bool result) {
    this->result = result;
}

bool Application::getResult() {
    return this->result;
}