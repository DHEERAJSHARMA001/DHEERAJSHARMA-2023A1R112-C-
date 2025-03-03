#include<iostream>
using namespace std;
class Student
{
    private:string studentname,Rollno,Email,Section,DepartmentName,Course ;
    int age ;
    
    public:Student(){
        cout<<"Enter Student Name: ";
        cin>>studentname;
        cout<<"Enter Roll no : ";
        cin>>Rollno;
        cout<<"Enter Email: ";
        cin>>Email;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Section: ";
        cin>>Section; 
       
        cout<<"Enter Department Name: ";
        cin>>DepartmentName; 
        cout<<"Enter Course: ";
        cin>>Course; 
    }
    public:void display(){
        cout<<"\nStudent Name: "<<studentname;
        cout<<"\nRoll no: "<<Rollno;
        cout<<"\nEmail: "<<Email;
        cout<<"\nAge: "<<age;
        cout<<"\nSection: "<<Section;
        cout<<"\nDepartmentName: "<<DepartmentName;
        cout<<"\nCourse: "<<Course;
    }
    

    public:~Student(){//destructor
        cout<<"\n Destructor called";
    }

};
int main(){
   
    Student obj;
    obj.display();
    
    return 0;
}