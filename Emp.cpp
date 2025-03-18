#include <iostream>
using namespace std;
class Employee {
private:
    int EmpID;
    private:string EmpName;
            string Address;

public:
    Employee() : EmpID(0), EmpName(""), Address("") {}

    // Parameterized constructor
    Employee(int id,string name, string address) : EmpID(id), EmpName(name), Address(address) {}

    // Function to accept input from user
    void InputDetail() {
        cout << "Enter Employee ID: ";
        cin >> EmpID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, EmpName);
        cout << "Enter Address: ";
        getline(cin, Address);
    }

  
    void Display() {
        cout << "\nEmployee ID: " << EmpID ;
        cout << "\nEmployee Name: " << EmpName;
        cout << "\nAddress: " << Address;
    }

    // Destructor
    ~Employee() {
        cout << "\nAll data erased.";
    }
};

int main() {
    Employee emp; 
    emp.InputDetail(); 
    emp.Display(); 
    return 0;
}
