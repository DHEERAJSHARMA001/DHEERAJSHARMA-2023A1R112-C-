#include<iostream>
//#include: Preprocessor directive;
//iostream: input output stream/ supports functions related to input and output
//iostream have definition of all pre define input and output functions using in this progr
using namespace std;
//using is a keyword
//namespace: COLLECTION OF PREDEFINE CLASSES
//std: standard library(name of predefine namespace)
class Program
/*class is a keyword(predefine word already defined in library)used to define a class
Program is a user define name.
For user define name ,we use some naming conventions
*/
{
    private:int pin;//function with return type and no parameter
    public://accesss specifier
int validate()//function definition
{
cout <<"Enter your pin: ";//cout is used to display message on screen but the message must be in parenthesis
//enclosed in double quotes" 
//: terminate or end of statement
cin>>pin;
if(pin==1234)
{
    return 1;
}
else{
    return 0;
}
}
public://Function with no return type and parameter
void Display_balance(int amount)//function definition
{
cout <<"Your balance is "<<amount;//amount is a formal parameter defined at function defintion 
//: terminate or end of statement
}

public://function with no return type and no parameter
void Display()//function definition
{
cout <<"HELLO\n";//cout is used to display message on screen but the message must be in parenthesis
//enclosed in double quotes" 
//: terminate or end of statement
}

public://accesss specifier
void fun()//function definition
{
cout <<"Hi\n";//cout is used to display message on screen but the message must be in parenthesis
//enclosed in double quotes" 
//: terminate or end of statement
}
};
int main(){
    Program obj;//creation of object
    int res;
    int amt=1000000;
    obj.fun();
    obj.Display();//function calling
    res=obj.validate();
    if(res==1){
        cout<<"Authentication succesful\n1";
         obj.Display_balance(amt);//amt is actual parameter defined in function calling.
    }
    else{
        cout<<"Authentication failed";
    }
    return 0;
}