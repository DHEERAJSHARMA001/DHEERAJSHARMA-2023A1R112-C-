#include <iostream>
using namespace std;

class MyClass {
public:
    void Display() {
        cout << "Displaying object details." << endl;
    }
};

int main() {
    MyClass obj;
    MyClass* ptr = &obj; // Pass by pointer
    ptr->Display(); // Call Display using pointer
    return 0;
}
