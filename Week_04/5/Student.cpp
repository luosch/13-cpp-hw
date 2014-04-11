#include "Student.h"
#include <cstring>
#include <string.h>
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
int Student::numStudents = 0;
Student::Student(const char *ss) {
    numGrades = 0;
    numStudents++;
    cout << 1 << endl;
    name = new char[100];
    strncpy(name, ss, strlen(ss)+1);
}
Student::~Student() {
    delete []name;
}    
void Student::displayGrades() const {
    cout << "Here are the grades for " << name << endl;
    for ( int i = 0; i < numGrades; i++ )
       cout << setw(5) << grades[i];
    cout << endl << endl;
}
Student& Student::addGrade(int gg) {
    numGrades++;
    *(this->grades) = gg;
    return *this;
}
int Student::getNumStudents() {
    return numStudents;
}
