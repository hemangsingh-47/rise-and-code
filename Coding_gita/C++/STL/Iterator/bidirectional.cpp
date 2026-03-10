// #include<iostream>
// #include<map>
// using namespace std;

// int main (){

//   cout<<"map element printed one by one to last position"<<endl;
    
//     map<int,string> m1;
    
// m1[0]="hemang";
// m1[1]="Singh";
// m1[2]="solanki";


//     auto itr=m1.end();
    
//     while(itr !=m1.begin()){
//              --itr;
//          cout << "Forward Iterator and tthe keyy is:  " << itr->first << "it's value is:  " << itr->second << endl;

//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<char> v1={'A','y','R','g'};
    
    auto itr=v1.end();
    
    while(itr !=v1.begin()){
         --itr;// keep learn.
        cout<<"forward iterator current value : "<< *itr<<endl;
       
    }
    return 0;
}