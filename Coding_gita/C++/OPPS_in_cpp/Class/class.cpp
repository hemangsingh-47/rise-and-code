#include<iostream>
#include<string>
using namespace std;

class Car{


    public:

    string comp_name;
    int mileage;
    string engine;

    void hemang(){
        cout<<"the hemang fun is defined in car class: "<<endl;
        cout<<"company name is:  "<<this->comp_name<<endl;
    }
};




int main(){


cout<<"Now creating the actual obj of class -> Car"<<endl;

Car c1;

c1.comp_name="audi";
c1.mileage=5;
c1.engine="V7";

cout<<"data insert successfully..."<<endl;

c1.hemang();


Car c2;

c2.comp_name="TVS";
c2.mileage=55;
c2.engine="BS6";



cout<<"data insert successfully..."<<endl;

c2.hemang();
    return 0;
}