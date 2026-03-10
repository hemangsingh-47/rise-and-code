#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
    string username;
    
    
    private:
    int bankBalance;
    
    
    public:
    
    BankAccount(string name,int blance){
        username=name;
        bankBalance=blance;
    }
    
    
    void display(){
        cout<<this->username<< endl;
         cout<<this->bankBalance<< endl;
    }
};


int main() {

BankAccount p1("hemang",4567);
p1.display();

BankAccount p2("Ritesh",450000000);
p2.display();

    return 0;
}