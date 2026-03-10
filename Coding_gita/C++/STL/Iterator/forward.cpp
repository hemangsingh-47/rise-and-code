// #include<iostream>
// #include<vector>
// using namespace std;

// int main (){
//     vector<char> v1={'A','y','R','g'};
    
//     auto itr=v1.begin();
    
//     while(itr !=v1.end()){
//         cout<<"forward iterator current value : "<< *itr<<endl;
//         ++itr;
//     }
//     return 0;
// }


// #include<iostream>
// #include<list>
// using namespace std;

// int main (){

//   cout<<"list element printed one by one"<<endl;
    
//     list<int> l1={1,2,3,4,5,-78,-87};
    
//     auto itr=l1.begin();
    
//     while(itr !=l1.end()){
//         cout<<"forward iterator current value : "<< *itr<<endl;
//         ++itr;
//     }
//     return 0;
// }


// #include<iostream>
// #include<set>
// using namespace std;

// int main (){

//   cout<<"set element printed one by one"<<endl;
    
//     set<string> s1={"Hemang","Singh","Solanki"};
    
//     auto itr=s1.begin();
    
//     while(itr !=s1.end()){
//         cout<<"forward iterator current value : "<< *itr<<endl;
//         ++itr;
//     }
//     return 0;
// }

#include<iostream>
#include<map>
using namespace std;

int main (){

  cout<<"set element printed one by one"<<endl;
    
    map<int,string> m1;
    
m1[0]="hemang";
m1[1]="Singh";
m1[2]="solanki";


    auto itr=m1.begin();
    
    while(itr !=m1.end()){
         cout << "Forward Iterator and tthe keyy is:  " << itr->first << "it's value is:  " << itr->second << endl;
        ++itr;
    }
    return 0;
}