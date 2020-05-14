#include "Application.h"

Application::Application() {
    this->grade = 0;
    this->result = false;
}

void Application::setApplicant(Applicant *applicant) { this->applicant = *(applicant); }
Applicant Application::getApplicant() { return this->applicant; }

void Application::setFaculty(Faculty *faculty) { this->faculty = *(faculty); }
Faculty Application::getFaculty() { return this->faculty; }

void Application::setGrade(int grade) { this->grade = grade; }
int Application::getGrade() { return this->grade; }

void Application::setResult(bool result) { this->result = result; }
bool Application::getResult() { return this->result; }