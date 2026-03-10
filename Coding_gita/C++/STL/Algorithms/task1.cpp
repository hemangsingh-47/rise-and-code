#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>

using namespace std;

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

       sort(v.begin(), v.end());
       reverse(v.begin(),v.end());

    ofstream file("output.txt");

    if (file.is_open()) {
        file << "Sorted and Reversed Vector:\n";
        for (int value : v) {
            file << value << endl;
        }
        file.close();
        cout << "file is closed";
    } else {
        cout << "404 page not found";
    }

    return 0;
}