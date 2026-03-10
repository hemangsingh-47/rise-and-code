#include <iostream>
#include <string>
using namespace std;

// Base class
class Laptop {
public:
    string Ram = "Ram Available";
    string Storage = "Storage Available";
    string Mother_Board = "MotherBoard is Available";

    void display() {
        cout << "Parent function got called and the common data members are:" << endl;
        cout << "Ram: " << Ram << endl;
        cout << "Storage: " << Storage << endl;
        cout << "Mother_Board: " << Mother_Board << endl;
    }
};

// Derived class
class Car : public Laptop {
public:
    string Brand = "HP";

    void showBrand() {
        cout << "Brand: " << Brand << endl;
    }
};

int main() {
    Car obj;
    obj.display();     // Inherited from Laptop
    obj.showBrand();   // Own function

    return 0;
}