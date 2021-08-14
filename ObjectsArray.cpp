#include <iostream>

using namespace std;

class doctor {
    private:
    string name, field;
    double salary;
    
    public:
    doctor() {}
    
    void read() {
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "Enter the field: ";
        cin >> field;
        cout << "Enter the salary: ";
        cin >> salary;
        cout << "\n";
    }
    
    void display() {
        cout << "\nThe name is " << name << endl;
        cout << "The field is " << field << endl;
        cout << "The salary is " << salary << endl;
        cout << "\n";
    }
};
    
int main() {
    int n;
    cout << "Enter the number of doctors: ";
    cin >> n;
    doctor* arr = new doctor[n];
    for(int i = 0; i < n; i++) {
    arr[i].read();
    arr[i].display();
    }
    delete [] arr;

    return 0;
}