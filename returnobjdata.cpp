/*#include <iostream>
using namespace std;

class Program {
public:
    int a;  // Class member variable
    
    // Parameterized constructor of the class
    Program(int b) {
        a = b;
    }

    // Member function to display the value of 'a'
    void display() {
        cout << "Value of a is: " << a;
    }
};

// Function that returns an object of the Program class
Program fun() {
    Program obj1(10);  // Creating an object with value 10
    return obj1;        // Returning the object
}

int main() {
    Program obj2 = fun();  // Calling fun() and storing the returned object in obj2
    obj2.display();         // Displaying the value of 'a' using the display function
    return 0;
}*/
/*
a. create a class with name Bank
b. member variable with name balance
c.parameterized constructor to initilze member variable
d. display function to display() updaated balance
e. function with name NetBanking() // return object
this function will deposit amount and add this amount with balance .
*/

#include<iostream>
using namespace std;
class Bank{
    public: float balance;
    Bank(float bal)
    {
   balance =bal;
    }
    void display(){
        cout<<"\n Balance in account is "<<balance;
    }
};
Bank NetBanking(){
    float amt;
    cout<<"\n Enter Amount to deposit";
    cin>>amt;
    Bank obj1(obj1.balance + amt);
    return obj1;
}
int main(){
    Bank obj2(500);
    obj2.display();
    obj2=NetBanking();
    obj2.display();
    return 0;
}