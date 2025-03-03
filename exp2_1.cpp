//To allocate appropriate access specifiers in data members of student  and course class
// class along with justification in comments
#include <iostream>
using namespace std;

class Student {
private:
    string studentName;  // Private: To prevent unauthorized modification
    string rollNo;       // Private: Ensures controlled access
    int age;             // Private: Age should only be updated through member functions

public:
    // Constructor to initialize student details
    Student(string name, string roll, int studentAge) {
        studentName = name;
        rollNo = roll;
        age = studentAge;
    }

    // Public function to display student details
    void displayStudent() {
        cout << "\nStudent Name: " << studentName;
        cout << "\nRoll No: " << rollNo;
        cout << "\nAge: " << age << endl;
    }
};

class Course {
private:
    string courseCode;   // Private: Ensures course code integrity
    string courseName;   // Private: Course name should not be altered externally
    int credits;         // Private: Credits should only be assigned via member functions

public:
    // Constructor to initialize course details
    Course(string cCode, string cName, int cCredits) {
        courseCode = cCode;
        courseName = cName;
        credits = cCredits;
    }

    // Public function to display course details
    void displayCourse() {
        cout << "\nCourse Code: " << courseCode;
        cout << "\nCourse Name: " << courseName;
        cout << "\nCredits: " << credits << endl;
    }
};

int main() {
    Student s1("DheerajSharma", "S123", 20);
    s1.displayStudent();

  
    Course c1("CS101", "Introduction to Programming", 3);
    c1.displayCourse();

    return 0;
}
