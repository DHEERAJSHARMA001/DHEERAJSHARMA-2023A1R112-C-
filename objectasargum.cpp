#include<iostream>
using namespace std;
class Program{
  public:int a=1;
  public: void Display(){
    cout<<"\n Value of a in class "<<a;
  }
};
void method1(Program obj1)//Pass by value (create a separate copy of a)
{
    obj1.a=2;//any change inside this function will not modify the orginal value
    cout<<"\n\nValue of a in method1 "<<obj1.a;
}
void method2(Program &obj){//Pass by reference
    obj.a=3;
    cout<<"\n\nValue of a in method2 is "<<obj.a;
}
void method3(Program *pobj){//Pass by Pointer
    pobj->a=4;
    cout<<"\n\nValue of a in method3 is "<<pobj->a;
}
void method4(const Program obj2){//Pass by constant
    //obj2.a=5;//this will generate error (we can only read data but not modify)
    cout<<"\n\n Value of a in method4 is "<<obj2.a;
}
int main(){
   Program obj;
   obj.Display();
   method1(obj);
   obj.Display();
   method2(obj);
   obj.Display();
   method3(&obj);
   obj.Display();
   method4(obj);
   obj.Display();
    return 0;
}