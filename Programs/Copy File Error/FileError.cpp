#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include <cstdlib> // for exit function
// This program reads values from the file 'example.dat'
// and echoes them to the display until a negative value
// is read.
int main() {
    ifstream indata; // indata is like cin
    int num; // variable for input value
    indata.open("file1.txt"); // opens the file
    if(!indata) { // file couldn't be opened
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }
    indata >> num;
    while ( !indata.eof() ) { // keep reading until end-of-file
        cout << "The next number is " << num << endl;
        indata >> num; // sets EOF flag if no value found
    }
    indata.close();
    cout << "End-of-file reached.." << endl;
    
    return 0;
}