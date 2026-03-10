#include<iostream>
#include<string>

using namespace std;

class Student{
    public:

    string name;
    string gender;
    int age;

    Student(string name1,string gender1,int age1){
cout<<"inti the value"<<endl;

name=name1;
gender=gender1;
age=age1;
    }

void display(){
    cout<<"the data which is intialize are :"<<this->name<<" "<<this->gender<<" "<<this->age<<endl;
}

};

int main(){
    Student s1("Hemang singh","male",24);
    s1.display();






    return 0;
}