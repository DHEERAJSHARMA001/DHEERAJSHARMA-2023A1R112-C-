// To update the details of a student using a member function of student class
#include <iostream>
using namespace std;

class Student {
private:
    string studentName;  
    string rollNo;       
    int age;           
public:
    Student(string name, string roll, int studentAge) {
        studentName = name;
        rollNo = roll;
        age = studentAge;
    }

    void updateDetails(string name, string roll, int studentAge) {
        studentName = name;
        rollNo = roll;
        age = studentAge;
        cout << "\nStudent details updated successfully!" << endl;
    }

    void displayStudent() {
        cout << "\nStudent Name: " << studentName;
        cout << "\nRoll No: " << rollNo;
        cout << "\nAge: " << age << endl;
    }
};

int main() {
    Student s1("Dheeraj sharma", "2023a1r112", 20);
    cout << "Initial Student Details:";
    s1.displayStudent();

    s1.updateDetails("Suvan Mahajhan", "2023a1r088", 22);

    cout << "\nUpdated Student Details:";
    s1.displayStudent();

    return 0;
}
