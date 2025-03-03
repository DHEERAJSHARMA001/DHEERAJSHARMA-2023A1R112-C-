// #include<iostream>
// using namespace std;
// class program
// {
//     public:program()
//     {
//         cout<<"constructor called";

//     }
// };
// int main(){
//     program obj;
//     return 0;
// }
//program with parameters
/*#include<iostream>
using namespace std;
class program
{
    public: program(string name,string MobNo)
    {
        cout<<"name is"<<name;
        cout<<"\n Mobile number is "<<MobNo;
    }
};
int main(){
    string nm;
    string mob;
    cout<<"Enter your name and mobile number: ";
    cin>>nm>>mob;
    program obj(nm,mob);
    return 0;
}*/

//Program to demonstrate working and execution sequence of constructor,destructor and other function.
/*#include<iostream>
using namespace std;
class Program
{
    private:int a;
    public:void Fun1(){
        cout<<"\n Function1";
    }
    public:void Fun2(){
        cout<<"\n Function2";
    }
    public: Program()//constructor
    {
       a=5;
        cout<<"\na= "<<a;
    }
    public:~Program(){//destructor
        cout<<"\n Destructor called";
    }

};
int main(){
   
    Program obj;
    obj.Fun2();
    obj.Fun1();
    return 0;
}*/

#include <iostream>


using namespace std;

class Area {
private:
    int radius;

public:
    // Default Constructor
    Area() {
        radius = 5;
        cout << "Constructor called: Radius set to " << radius ;
    }

  
    void calculate() {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area ;
    }

    
    ~Area() {
        cout << "Destructor called: Memory freed!" ;
    }
};

int main() {
    Area obj; 
    obj.calculate(); 
    return 0; 
}


