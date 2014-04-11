#ifndef STUDENT_H
#define STUDENT_H
 
// class Student definition
class Student {
 public:
    explicit Student(const char *);
    ~Student();
    void displayGrades() const;
    Student &addGrade(int grade);
    static int getNumStudents();
 private:
    int *grades;
    char *name;
    int numGrades;
    int idNum;
 
    static int numStudents;
};  // end class Student
 
#endif  // STUDENT_H
