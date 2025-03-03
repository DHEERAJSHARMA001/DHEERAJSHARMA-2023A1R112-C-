//Program to demonstrate working of array of object(Method)
// using namespace std;
// #include<iostream>

// class Program{
//     private: int RegNo;float Marks;//private member of class
//     public: Program(int R,float M){//parameterized constructor of class 
//         RegNo=R;
//         Marks=M;
//     }
//     public: void display()//Function of class
//     {
//         cout<<"\n RegNumber = "<<RegNo<<"\t"<<"Marks = "<<Marks;
//     }
// };
// int main(){
//     Program obj[3]={{101,458},{102,438},{103,448}};//Array of object with MANUAL limit
//     int i;
//     for (i=0;i<3;i++){
//         obj[i].display();//calling of digits function with array of object
//     }   
    

//     return 0;
// }
/*Write a program create a class with name student Management system store student data from Roll no 1 to 10 
data include (name,roll no ,percentage) Display all data in reverse order using array of object*/
using namespace std;
#include<iostream>

class StudentManagementsystem{
    private: string name;int Rollno;float percentage;//private member of class
    public: StudentManagementsystem(string N,int R,float P){//parameterized constructor of class 
        name=N;
        Rollno=R;
        percentage=P;
    }
    public: void display()//Function of class
    {
        cout<<"\n Name = "<<name<<"\t"<<"Rollno = "<<Rollno<<"\t"<<"Percentage = "<<percentage;
    }
};
int main(){
    StudentManagementsystem obj[10]={{"DHEERAJ",101,98.5},{"Vasu",102,93.8},{"Suvan",103,94.8},{"Ruvan",104,96.8}
    ,{"Shaksam",105,89.8},{"Nitish",106,98.8},{"Aman",107,92.8},{"Punar",108,93.8},{"Raman",109,97.8},{"Harsheen",110,99.8}};//Array of object with MANUAL limit
    int i;
    for (i=9;i>=0;i--){
        obj[i].display();//calling of digits function with array of object
    }   
    

    return 0;
}