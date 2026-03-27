#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newdept)
    {
        dept = newdept;
    }

    // Agar variable private hai, to usko directly class ke bahar access nahi kar sakte.

    // setter Setter → value set/update karne ke liye

    void setsalary(double s)
    {
        salary = s;
    }

    // getter Getter → value get karne ke liye.

    double getsalary()
    {
        return salary;
    }
};

class Student
{
public:
    string name;
    string dept;
    float marks;
};

class Account
{

private:
    double pin;

public:
    double accountid;
    string bankname;


    //setter
    void setpin(double newpin)
    {
        pin = newpin;
    }
//getter
    double getpin()
    {
        return pin;
    }
};
int main()
{

    Teacher t1;
    t1.name = "Neel Sir";
    t1.subject = "C++";
    t1.setsalary(200000);

    cout << t1.name << endl;
    // cout << t1.getsalary() << endl;

    Student s1;
    s1.name = "Hemang singh solanki";
    s1.dept = "Computer Science";

    Account a1;
    a1.bankname = "SBI";
    a1.accountid = 12345678;
    a1.setpin(472008);
    cout << a1.bankname << endl;
    cout << a1.getpin() << endl;

    // cout << s1.name << endl;
    return 0;
}