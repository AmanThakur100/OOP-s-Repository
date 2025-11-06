//ifstream and ofstream {class}

#include <iostream>
#include <fstream>
#include <string>  // Needed for std::string

using namespace std;

int main() {
    ifstream myfile;
    myfile.open("example.txt");

    if (!myfile) {  // Check if file opened successfully
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;
    myfile >> data;  // Reads one word (up to whitespace)
    cout << data << endl;

    myfile.close();
    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to file" << endl;
    myfile.close();
    return 0;
}

