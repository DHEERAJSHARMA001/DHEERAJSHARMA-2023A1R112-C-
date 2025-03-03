//To add the details of a student using a parameterized constructor of student class
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
    void displayStudent() {
        cout << "\nStudent Name: " << studentName;
        cout << "\nRoll No: " << rollNo;
        cout << "\nAge: " << age << endl;
    }
};

int main() {
   
    Student s1("DheerajSharma", "S123", 20);

    
    s1.displayStudent();

    return 0;
}
