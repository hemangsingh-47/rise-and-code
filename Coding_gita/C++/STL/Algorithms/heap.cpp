// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v= {85, 90, 78, 92, 88};

//     make_heap(v.begin(),v.end());

//         cout << "Heapified scores: ";

//         for(const auto& value:v){
//             cout<<"value are.... : "<<value<<endl;
//         }
//         return 0;
// }






//9. pop_heap() - Removing the Root Element from a Heap


// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v= {85, 90, 78, 92, 88};

//     make_heap(v.begin(),v.end());

//     pop_heap(v.begin(),v.end());
//     v.pop_back();

//         cout << "Heapified scores after pop: ";

//         for(const auto& value:v){
//             cout<<"value are.... : "<<value<<endl;
//         }
//         return 0;
// }




//10. push_heap() - Inserting an Element into a Heap



// #include<iostream>
// #include<algorithm>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> v= {85, 90, 78, 92, 88};

//     make_heap(v.begin(),v.end());

//      v.push_back(95);
//     push_heap(v.begin(),v.end());
   

//         cout << "Heapified scores after push: ";

//         for(const auto& value:v){
//             cout<<"value are.... : "<<value<<endl;
//         }
//         return 0;
// }


// //create stl vactor take size from user then insert element from user side  sort the  vector ,revurse it and store it inside output.txt


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <fstream>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of vector: ";
//     cin >> n;

//     vector<int> v(n);

//     cout << "Enter " << n << " elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     // Sort the vector
//     sort(v.begin(), v.end());

//     // Reverse the vector
//     reverse(v.begin(), v.end());

//     // Write output to file
//     ofstream file("output.txt");

//     if (file.is_open()) {
//         file << "Sorted and Reversed Vector:\n";
//         for (int value : v) {
//             file << value << " ";
//         }
//         file.close();
//         cout << "Data successfully written to output.txt\n";
//     } else {
//         cout << "Error opening file!\n";
//     }

//     return 0;
// }
