//To create a course class,its constructor ,destructor,and member function
#include <iostream>
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int credits;

public:
    // Constructor
    Course(string cCode, string cName, int cCredits) {
        courseCode = cCode;
        courseName = cName;
        credits = cCredits;
        cout << "Course object created!" << endl;
    }
    void displayCourse() {
        cout << "\nCourse Code: " << courseCode;
        cout << "\nCourse Name: " << courseName;
        cout << "\nCredits: " << credits << endl;
    }

    // Destructor
    ~Course() {
        cout << "Course object destroyed!" << endl;
    }
};

int main() {
    Course c1("CS101", "Introduction to Programming", 3);
    c1.displayCourse();

    return 0;
}
