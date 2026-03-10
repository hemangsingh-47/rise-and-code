#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l1={1,2,3,4,5};

    l1.push_back(56);
    l1.push_front(456);

 l1.reverse();
    for(int value:l1){
        cout<<value<<endl;
    }



    return 0;
}