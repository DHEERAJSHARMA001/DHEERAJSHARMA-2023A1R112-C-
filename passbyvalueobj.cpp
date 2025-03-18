//Pass by value
//Program to demonstrate working of passing object as parameter to function.
// #include<iostream>
// using namespace std;
// class Program{
//     public:int a;
//     public: Program(int b){
//         a=b;
//     }
//     public: void Display(){
//         cout<<"\n Value of a is "<<a;

//     }
// };
// void modify(Program obj2){
//     obj2.a=10;
//     //any change inside this function will not modify original value of a this will create 
//     // separate instance of program class.
//     cout<<"\nModified value is : "<<obj2.a;
// }
// int main(){
//     Program obj1(9);//Original object of class with initialization of parameterized constructor
//     obj1.Display();
//     modify(obj1);//calling modify function.
//     obj1.Display();
   
//     return 0;
// }/
#include<iostream>
using namespace std;
class Result{
  public: string Name;int RollNo;float Marks;
public:Result(string Name1,int RollNo1,float Marks1){
    Name=Name1;
    RollNo=RollNo1;
    Marks=Marks1;
}
public:void Display(){
    cout<<"\nName = "<<Name<<"\t Roll Number = "<<RollNo<<"\t Marks = "<<Marks;
}
};
void Semester1(Result sem1){
    sem1.Marks =400;
    cout<<"\n Marks of semester1 is "<<sem1.Marks; 
}
void Semester2(Result sem2){
    sem2.Marks=350;
    cout<<"\n Marks of semester2 is "<<sem2.Marks; 
}
void Semester3(Result sem3){
    sem3.Marks=450;
    cout<<"\n Marks of semester3 is "<<sem3.Marks; 
}
int main(){
    Result obj("Abc",1,0);
    obj.Display();
    Semester1(obj);
    obj.Display();//
    Semester2(obj);
    obj.Display();//
    Semester3(obj);
    obj.Display();//
    Result* ptr=&obj;
    ptr->Display();

    return 0;
}