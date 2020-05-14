cmake_minimum_required(VERSION 3.15)
project(enrollment_system)

set(CMAKE_CXX_STANDARD 14)

add_executable(enrollment_system main.cpp Applicant.cpp Applicant.h Exam.cpp Exam.h Faculty.cpp Faculty.h Professor.cpp Professor.h Application.cpp Application.h Storage.cpp Storage.h EnrollmentEngine.cpp EnrollmentEngine.h InterfaceController.cpp InterfaceController.h)