// #include<iostream>
// using namespace std;

// int main(){
// int a;
// cout<<"enter a number: ";
// cin>>a;

// cout<<"you entered : "<<a<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//     cout<<"Current index value is "<<arr[i]<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5];
// for(int i=0;i<5;i++){
//     cout<<"enter a num: "<<endl;
//     cin>>arr[i];
//     cout<<"current index value of: "<<i<<"is "<<arr[i]<<endl;
// }

// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5]={1,2,3,4,5};

// cout<<sizeof(arr)<<endl;
// cout<<sizeof(arr)/sizeof(arr[0])<<endl;


// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     string a ="SAM";
//     string b ="Singh";
    
//     cout<<a+" "+b<<endl;

// return 0;
// }/



// #include<iostream>
// using namespace std;

// enum word{
//     LOW,MEDIUM,HIGH
// };

// int main(){
// enum word a1=LOW;
// enum word a2=MEDIUM;
// enum word a3=HIGH;


// cout<<"The value returnd by a1 is :"<<a2<<endl;

// switch(a3){
//   case 0: cout << "The case0 is executed" << endl;
//           break;

//   case 1: cout << "The case1 is executed" << endl;
//           break;

//   default: cout << "The default value is executed for a3" << endl;
// }

// return 0;
// }


#include<iostream>
using namespace std;

int main(){

int a =10;
int* ptr = &a;

cout << "The addres of the targeted variable a is using original variable: "
<< &a << endl;

cout << "The addres f the targeted variable a is using pointer: " << ptr <<
endl;
cout << "The actual value in original variable a is: " << a << endl;

return 0;