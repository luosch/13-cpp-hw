#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Student.h"
 
int main() {
    cout << "There are currently " << Student::getNumStudents()
         << " students\n\n";
    Student *s1Ptr = new Student("Student 1");
 
    s1Ptr->addGrade(100).addGrade(75).addGrade(89);
    s1Ptr->displayGrades();
 
    Student *s2Ptr = new Student("Student 2");
    s2Ptr->addGrade(83).addGrade(92);
    s2Ptr->displayGrades();
 
    Student s3("Student 3");
    s3.addGrade(62).addGrade(91).displayGrades();
 
    cout << "There are currently " << Student::getNumStudents()
         << " students\n\n";
 
    delete s2Ptr;
    delete s1Ptr;
    while(1);
}  // end main
