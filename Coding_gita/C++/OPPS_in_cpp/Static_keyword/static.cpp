#include <iostream>
#include <string>
using namespace std;

class CodingGita {

    // Data members
    string sName;
  static string organization;
    int roll;
    static int tStudent;   // static because it counts total students

public:

    // Constructor
    CodingGita(string name, int rn) {
        sName = name;
        roll = rn;
        tStudent++;
    }

    // Function member
    void display() {
        cout << "Student name is -> " << this->sName << endl;
        cout << "Roll no is -> " << this->roll << endl;
        cout << "Total number of students -> " << tStudent << endl;
        cout << "Organization name -> " << organization << endl;
    }
};

// Static variable definition
int CodingGita::tStudent = 0;
string CodingGita::organization="CodingGita";
int main() {

    CodingGita s1("Hemang", 101);
    CodingGita s2("Rahul", 102);
  CodingGita s3("Ramya", 103);
  
  
    s1.display();
    s2.display();
s3.display();
    return 0;
}