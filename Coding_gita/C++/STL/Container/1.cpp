// #include <iostream>
// #include <set>

// using namespace std;

// int main() {

//     // Declare a set and initialize it with some integer values
//     set<int> s1 = {45, 6, 78, 3, 0, 65};

//     // Insert a new element into the set
//     s1.insert(-90);

//     // Remove the element '3' from the set
//     s1.erase(3);

//     // Display all elements of the set
//     // Note: Set stores elements in sorted order and does not allow duplicates
//     for (int value : s1) {
//         cout << value << endl;
//     }

//     // Search for a specific element in the set
//     auto it = s1.find(-54);

//     // Check whether the element was found
//     if (it != s1.end()) {
//         cout << "Element found" << endl;
//     } else {
//         cout << "Element not found" << endl;1
//     }

//     return 0;
// }

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     int m,n,x;
    
//     list<int>l1,l2,l3;
    
//     cin>>m;
//     cin>>n;
    
//     for(int i=0;i<m;i++){
//         cin>>x;
//         l1.push_back(x);
//     }
//       for(int i=0;i<n;i++){
//           cin>>x;
//         l2.push_back(x);
//     }
    
//     for(int i:l1) l3.push_back(i);
//      for(int i:l2) l3.push_back(i);
    
    
//     l3.sort();
    
//     for(int i:l3) cout<<i<<endl;
//     return 0;
// }



//Task-2  (LIST)



// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     int m, n, x;

//     list<int> l1, l2;

//     // Take size of first list
//     cout << "Enter size of list l1: ";
//     cin >> m;

//     cout << "Enter elements of l1:" << endl;
//     for(int i = 0; i < m; i++) {
//         cin >> x;
//         l1.push_back(x);
//     }

//     // Take size of second list
//     cout << "Enter size of list l2: ";
//     cin >> n;

//     cout << "Enter elements of l2:" << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> x;
//         l2.push_back(x);
//     }

//     // Concatenate l2 into l1
//     l1.splice(l1.end(), l2);

//     // Sort the combined list
//     l1.sort();

//     // Print final list
//     cout << "Final sorted list after concatenation:" << endl;
//     for(int val : l1) {
//         cout << val << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <deque>
// #include <string>
// using namespace std;

// int main() {
//     deque<string> dq;
//     string s1, s2, s3;
//     int pos;

//     // Take first string and insert at front
//     cout << "Enter first string: ";
//     cin >> s1;
//     dq.push_front(s1);

//     // Take second string and insert at back
//     cout << "Enter second string: ";
//     cin >> s2;
//     dq.push_back(s2);

//     // Take third string
//     cout << "Enter third string: ";
//     cin >> s3;

//     // Take position for insertion
//     cout << "Enter position to insert third string: ";
//     cin >> pos;

//     // Insert at specific position
//     dq.insert(dq.begin() + pos, s3);

//     // Print all elements
//     cout << "\nDeque elements are:" << endl;
//     for (string str : dq) {
//         cout << str << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <deque>
// using namespace std;

// int main(){
//     deque<string> d;
    
//     string s;
    
//     for(int i=0; i<3;i++){
//         cout << i << "string"<< endl;
//         cin >> s;
//         d.push_back(s);
//     }
    
//     int val;
//     cout<< "value " <<endl;
//     cin >> val;
    
//     if(val < 4 && val>0){
//         cout << d.at(val-1) << endl;
//     }
//     else{
//         cout << "enter valid value b/w 1-3" << endl;
//     }
    
//     for(string c:d){
//         cout<< c << endl;
//     }
    
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int x;

  
//     cout << "Enter 10 elements:" << endl;
//     for(int i = 0; i < 10; i++) {
//         cin >> x;
//         v.push_back(x);
//     }

 
//     for(int i = v.size() - 1; i >= 0; i--) {
//         if(i % 2 == 0) {
//             v.erase(v.begin() + i);
//         }
//     }

//     cout << "Remaining elements:" << endl;
//     for(int val : v) {
//         cout << val << " ";
//     }

//     cout << "\nTotal size: " << v.size() << endl;

//     return 0;
// }


