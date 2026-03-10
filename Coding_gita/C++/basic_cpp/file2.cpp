#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream file;
    string input;

    file.open("sample.txt", ios::app);

    if (file.is_open()) {

        cout << "Enter text : ";
        getline(cin, input);  

        file << input << endl; 
        file.close();
    }

    return 0;
}
