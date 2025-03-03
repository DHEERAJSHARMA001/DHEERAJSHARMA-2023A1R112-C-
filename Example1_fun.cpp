/*
#include<iostream>//Function with no parameter and no return type
using namespace std;
class Program{
    public:void Message(){
        cout<<"HI";
    }
};
int main(){
    Program obj;
    obj.Message();
    return 0;
}*/
#include<iostream>//Function with no parameter and  return type
using namespace std;
class Student_Data{
    public:void Welcome_Message(){
        cout<<"Welcome to MIET JAMMU";
    }
    private : string Name;
     int  Regno;
    public : string Validate_Regno()
    {
        cout<<"Enter your Name";
        cin>>Name;
        cout<<"\nEnter your Registration number";
        cin>>Regno;
        if(Regno>=61 && Regno<=120)
        {
            return "True";
        }
        else{
            return "False";
        }
    }
};
int main(){
    Student_Data obj;
    obj.Welcome_Message();
    string res;
    res=obj.Validate_Regno();


    return 0;
}
/*Program to create a class with name validate_RegNo(), this function  will accept student name and registration number from student and validate it.*/
