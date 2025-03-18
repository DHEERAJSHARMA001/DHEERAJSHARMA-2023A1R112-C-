/*WAP to 
a. create a class with name BankApp.
b. create a parameterized constructor of this class ,that initialized class attributes like ProductID ,Product Name,
Product Price.
c.Implement Display Function to Display all records.
d.Update function to change Product Price.
(update function will not modify original price of the product additionally )
e.create array of object to store product information of 5 different products.
f. accept product id from user and change price of that product anly.
g. display product not exist , if user enter incorrect product
*/
#include<iostream>
using namespace std;

class BankApp {
private:
    string Name;
    int price;
    int updatedPrice; // New attribute to store updated price

public:
    BankApp(string productName, int prices) {
        Name = productName;
        price = prices;
        updatedPrice = prices; // Initialize updated price to original price
    }

    void display() {
        cout << "Product Name: " << Name << ", Price: " << updatedPrice << endl;
    }

    void update(int newPrice) {
        updatedPrice = newPrice; // Update the updated price
    }

    int getPrice() {
        return price; // Return original price
    }

    string getName() {
        return Name; // Return product name
    }
};

int main() {
    BankApp obj1[5] = { {"PeanutButter", 420}, {"Creatine", 545}, {"BrownBread", 45}, {"Protein", 1200}, {"Multivitamins", 357} };

    // Display all products
    for (int i = 0; i < 5; i++) {
        obj1[i].display();
    }

    int productId;
    cout << "Enter Product ID (0-4) to update price: ";
    cin >> productId;

    if (productId >= 0 && productId < 5) {
        int newPrice;
        cout << "Enter new price for " << obj1[productId].getName() << ": ";
        cin >> newPrice;
        obj1[productId].update(newPrice);
        cout << "Updated Product List:" << endl;
        for (int i = 0; i < 5; i++) {
            obj1[i].display();
        }
    } else {
        cout << "Product does not exist." << endl;
    }

    return 0;
}