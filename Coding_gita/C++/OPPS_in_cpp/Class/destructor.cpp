#include<iostream>
#include<string>

using namespace std;

class Student {
public:
    string name;
    string gender;
    int age;

    // Constructor
    Student(string name1, string gender1, int age1) {
        cout << "Initializing the values" << endl;
        name = name1;
        gender = gender1;
        age = age1;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for student: " << name << endl;
    }

    void display() {
        cout << "The initialized data are: "
             << name << " " << gender << " " << age << endl;
    }
};

int main() {
    Student s1("Hemang Singh", "male", 24);
    s1.display();

    return 0; // Destructor is called automatically here
}