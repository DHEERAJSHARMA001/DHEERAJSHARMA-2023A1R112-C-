#include<iostream>
using namespace std;
class student{
    private:string studentname,Rollno,Email,Section ;
    int age ;
    
    public:void input(){
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
       
    }
    public:void display(){
        cout<<"\nStudent Name: "<<studentname;
        cout<<"\nRoll no: "<<Rollno;
        cout<<"\nEmail: "<<Email;
        cout<<"\nAge: "<<age;
        cout<<"\nSection: "<<Section;
    }
    
};
class courses{
    private:string CourseCode;string CourseName;int Credits;
     public: void input(){
        cout<<"Enter Course Code: ";
        cin>>CourseCode;
        cout<<"Enter Course Name: ";
        cin>>CourseName;
        cout<<"Enter Credits: ";
        cin>>Credits;
        
     }
     public:void display(){
        cout<<"\nCourse Code: "<<CourseCode;
        cout<<"\nCourse Name: "<<CourseName;
        cout<<"\nCredits: "<<Credits;
        
    }
};
class Department{
    private:string DepartmentID;string DepartmentName;string location;
     public: void input(){
        cout<<"Enter Department ID : ";
        cin>>DepartmentID ;
        cout<<"Enter Department Name: ";
        cin>>DepartmentName;
        cout<<"Enter Location: ";
        cin>>location;
        
     }
     public:void display(){
       
        cout<<"\nDepartmentID: "<<DepartmentID;
        cout<<"\nDepartmentName: "<<DepartmentName;
        cout<<"\nLocation: "<<location;
        
    }

};

class Professor{
    private:int ProfessorID;string ProfessorName;string Email;
     public: void input(){
        cout<<"Enter Professor ID : ";
        cin>>ProfessorID ;
        cout<<"Enter Professor Name: ";
        cin>>ProfessorName;
        cout<<"Enter Email: ";
        cin>>Email;
        
     }
     public:void display(){
       
        cout<<"\nProfessorID: "<<ProfessorID;
        cout<<"\nProfessorName: "<<ProfessorName;
        cout<<"\nEmail: "<<Email;
        
    }
};
class student_marks { 
    private:
        int sub1;
        int sub2;
        int sub3;
        int total_marks;
        int percentage;
    
       
    public: void input(){
            cout << "Enter student marks for subject 1: ";
            cin >> sub1;
    
            cout << "Enter student marks for subject 2: ";
            cin >> sub2;
    
            cout << "Enter student marks for subject 3: ";
            cin >> sub3;
    
            total_marks = sub1 + sub2 + sub3;
            percentage = total_marks / 3;  
        }
    
        void display() {
            cout<<"\nSubject1: "<<sub1;
            cout<<"\nSubject2: "<<sub2;
            cout<<"\nSubject3: "<<sub3;
            cout << "\nTotal marks: " << total_marks;
            cout << "\nPercentage: " << percentage << "%" << endl;
        }
    };
int main(){
    student s;
    courses c;
    Department d;
    student_marks sm;
    Professor p;
    
    int choice;
    do {
        cout << "\nChoose an option to enter data:";
        cout << "\n1. Student";
        cout << "\n2. Courses";
        cout << "\n3. Department";
        cout << "\n4. Student Marks";
        cout << "\n5. Professor";
        cout << "\n6. Display";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                s.input();
               
                break;
            case 2:
                c.input();
             
                break;
            case 3:
                d.input();
                
                break;
            case 4:
                sm.input();
               
                break;
            case 5:
                p.input();
               
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
        case 7:
        s.display();
        c.display();
        d.display();
        sm.display();
                p.display();
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
    
  

    return 0;
}