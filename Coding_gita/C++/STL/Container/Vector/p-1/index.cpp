#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,20,30};
    v.push_back(690);
    
for(int value:v){//for of loop to give only data (value)
    cout<<value<<endl;
}

v.insert(v.begin()+1,67);
for(int value:v){//for of loop to give only data (value)
    cout<<value<<endl;
}
return 0;
}