// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){


//     vector <int> v1={1,45,6,7,8,2,56};


// // auto itr=find(v1.begin(),v1.end(),8);

// // if(itr!=v1.end()){
// // //*itr → actual value

// // //itr → address / position

// //     cout<<"element is : " << *itr <<endl;
// // }
// // else{
// //     cout<<"element dose not exist"<<endl;
// // }
   
  

//                                                                 //sort method
// // sort(v1.begin(),v1.end());
// reverse(v1.begin(),v1.end());

// for(auto& value:v1){
//     cout<<value<<endl;
// }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// int main() {
//     vector<int> scores = {85, 90, 78, 92, 88};

//     // Calculate the sum of scores
//     int total = accumulate(scores.begin(), scores.end(), 0);

//     cout << "Total score: " << total << endl;

//     return 0;
// }


                                                                  // binary_search() - Searching for an Element in a Sorted Range

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {78, 85, 88, 90, 92};  // Already sorted

    // Search for the score 90
    bool found = binary_search(scores.begin(), scores.end(), 90);

    if (found) {
        cout << "Found score 90" << endl;
    } else {
        cout << "Score 90 not found" << endl;
    }

    return 0;
}