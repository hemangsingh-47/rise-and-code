
// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount{

// public:
//     string username;

// protected:   // changed from private to protected
//     int bankBalance;

// public:
//     BankAccount(string name,int balance){
//         username = name;
//         bankBalance = balance;
//     }

//     void display(){
//         cout << "Username: " << username << endl;
//         cout << "Balance: " << bankBalance << endl;
//     }
// };

// // Child class
// class SavingsAccount : public BankAccount{

// public:
//     SavingsAccount(string name,int balance) 
//         : BankAccount(name,balance) {}

//     void showBalance(){
//         // accessing protected variable
//         cout << "Accessing protected balance: " << bankBalance << endl;
//     }
// };

// int main() {

//     BankAccount p1("Hemang",4567);
//     p1.display();

//     SavingsAccount p2("Ritesh",45000);
//     p2.showBalance();

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    
    public:
       string userName;
       
    protected:   
       int bankBalance;
       
    public:
       
      BankAccount(string name, int balance){
          userName = name;
          bankBalance = balance;
      }
       
       void displayUserDetail(){
           cout << "Account holder name is:->" << this->userName << endl;
           cout << "Current balance is:->" << this->bankBalance << endl;
       }
    
};


class Child : public BankAccount{
    
  
    public:
    
        Child(string name, int balance):BankAccount(name, balance){}
        
        void display1(){
            cout << "User name is:->" << userName << endl;
            
            cout << "Current balance is:->" << bankBalance << endl;
        }
        
};

// class Child : public BankAccount{
    
//     public:
      
//       void display1(){
//           cout << "Current     BankBalance is:->" << bankBalance << endl;
//       }
    
// };


int main(){
    
    Child c1("Samir singh", 675);
    c1.display1();

    return 0;
}