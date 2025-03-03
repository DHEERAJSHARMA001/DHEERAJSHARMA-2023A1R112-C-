#include <iostream>
using namespace std;
class login_details{
    private:int pin;
    public:int validate(){
        cout<<"enter your login password: ";
        cin>>pin;
        if(pin==1234)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    public:void display(){
        cout<<"welcome to myapp";
    }
};
class User_Profile{
    private:string username,Name,email;
    public:int accept(){
        cout<<"\nEnter username: ";
        cin>>username;
        cout<<"\nEnter Name: ";
        cin>>Name;
        cout<<"Enter email: ";
        cin>>email;
       
    }
    public:void display(){
        cout<<"\nUsername: "<<username;
        cout<<"\nName: "<<Name;
        cout<<"\nEmail: "<<email;
    }
};
int main()
{
    login_details obj;
    int res;
    res= obj.validate();
    if(res==1){
        obj.display();
    }
    else{
        cout<<"invalid";
    }
    User_Profile object;
    object.accept();
    object.display();
    return 0;
}
