/*
WAP for Employee Management system
a.create a class with name Emloyee
b. create a parameterized constructor to initialize class attributes like employee Name,employee code, basic salar.
c. create a member function Display() to display records on screen.
d. create a function Gross_Salary() which calculates components of salary like TA(3% of Basic salary),DA(4% pf Basic Salary),
HRA(5% of Baisc Salary),Pf(4% of Basic Salary).
Gross salary is sum of Basic,TA,DA,HRA,PF is deducted from Gross Salary
e. Create a function Update() to increment Basic Salary of Employees as:
Gross Salary Between 10000 to 20000 , 10% increment
Gross Salary Between 20000 to 30000 , 15% increment
Gross Salaryabove 30000, 20% increment
f. create a function Update_Profile(),if user to correct its name or code.
g. create a function with name Get_Data() that only reads Employee Data but not able to modify user data. 


*/
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     string employee_Name;int employee_Code;double basicSalary;

// public:
//     Employee(string name, int code, double salary) {
//         employee_Name = name;
//         employee_Code = code;
//         basicSalary = salary;
//     }

//   public:  void Display() {
//         cout << "\nEmployee Name: " << employee_Name;
//         cout << "\nEmployee Code: " << employee_Code;
//         cout << "\nBasic Salary: " << basicSalary;
//         cout << "\nGross Salary: " << Gross_Salary();
//     }

//    public: double Gross_Salary() {
//         double TA = 0.03 * basicSalary;
//         double DA = 0.04 * basicSalary;
//         double HRA = 0.05 * basicSalary;
//         double PF = 0.04 * basicSalary;
//         return (basicSalary + TA + DA + HRA - PF);
//     }
//     public:void Update() {
//         double gros_Sal = Gross_Salary();
//         if (gros_Sal >= 10000 && gros_Sal < 20000) {
//             basicSalary += basicSalary * 0.10;
//         } else if (gros_Sal >= 20000 && gros_Sal < 30000) {
//             basicSalary += basicSalary * 0.15;
//         } else if (gros_Sal >= 30000) {
//             basicSalary += basicSalary * 0.20;
//         }
//         cout << "\nSalary updated successfully! New Basic Salary: " << basicSalary;
//     }

    
//     void Update_Profile(string newName, int newCode) {
//         employee_Name = newName;
//         employee_Code = newCode;
//         cout << "\nProfile updated successfully!";
//     }

//     void Get_Data()  {
//         cout << "\nEmployee Name: " << employee_Name
//          << "\nEmployee Code: " << employee_Code
//          << "\nBasic Salary: " << basicSalary;
//     }
// };

// int main() {
//     Employee emp1("Dheeraj Sharma", 101, 15000);
//     emp1.Display();

//     cout << "\nUpdating salary\n";
//     emp1.Update();
//     emp1.Display();

//     cout << "\nUpdating profile\n";
//     emp1.Update_Profile("Sahil Sharmra", 102);
//     emp1.Display();

//     cout << "\nGetting employee data\n";
//     emp1.Get_Data();

//     return 0;
// }

#include<iostream>
using namespace std;
class Employee{
    private:string Employee_Name;int Employee_Code;float Basic_Salary;
public: Employee(string name,int empcode,float sal){
    Employee_Name=name;Employee_Code=empcode;Basic_Salary=sal;
}
void Display(){
    cout<<"\nEmployee Name "<<Employee_Name;
    cout<<"\nEmployee Code "<<Employee_Code;
    cout<<"\nBasic Salary "<<Basic_Salary;
    cout<<"\nGross Salary "<<Gross_Salary();
}
float Gross_Salary(){
float TA=(0.03*Basic_Salary);
float DA=(0.04*Basic_Salary);
float HRA=(0.05*Basic_Salary);
float PF=(0.04*Basic_Salary);
return (Basic_Salary+TA+DA+HRA-PF);
}
void UpdateSalary(){
    float grosalary=Gross_Salary();
    if(grosalary>=10000&&grosalary<=20000){
        Basic_Salary+=Basic_Salary*0.10;
    }else if(grosalary>=20000&&grosalary<=30000){
        Basic_Salary+=Basic_Salary*0.15;
    }else if(grosalary>=30000){
        Basic_Salary+=Basic_Salary*0.20;
    }
    else{
        cout<<"\nNo updated of grosssalary";
    }
    cout<<"\n Salary Update of Basic Salary"<<Basic_Salary;
}
void Update_Profile(string newName, int newCode) {
             Employee_Name = newName;
             Employee_Code = newCode;
            cout << "\nProfile updated successfully!";
        }
void getdata(){
    cout<<"\nEmployee Name "<<Employee_Name;
    cout<<"\nEmployee Code "<<Employee_Code;
    cout<<"\nBasic Salary "<<Basic_Salary;
}
};
int main(){
    Employee obj={"DHEERAJ",1,15000};
    obj.Display();
    obj.UpdateSalary();
    obj.getdata();
    obj.Update_Profile("SAHIL",2);

}