#include<iostream>
using namespace std;
class Payapp{
    private: float amt,dis;
    public:int accept(){
        cout<<"Enter your amount: ";
        cin>>amt;
     }
     public :void validate(){
        if (amt>0)
        {
            cout<<"\n Amount is valid";
            Discount();
            Diplay();
        }
        else{
            cout<<"Amount is not valid";
        }
     }
     public :void Discount(){
        dis=amt/100*10;
     }
     public :void Diplay(){
             cout<<"\n Your Paybill is :"<<amt-dis;
    }

};

int main(){
    Payapp obj;
    obj.accept();
    obj. validate();
   

    return 0;
}