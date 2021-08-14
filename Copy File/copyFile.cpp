#include <iostream>
#include <fstream>

using namespace std;
 
int main(void) {
    string line;
    ifstream file1 {"file1.txt"};
    ofstream file2 {"file2.txt"};
    while(getline(file1, line)) file2 << line << "\n";
    cout << "Copy Finished \n";
    file1.close();
    file2.close();
    cout << "\n------------------------------------\n\n";

    string str;
    ifstream f {"file2.txt"};  
    while(f.eof() == 0) {
        getline(f, str);
        cout << str << endl;
    }
    f.close(); 
    
    return 0;
}