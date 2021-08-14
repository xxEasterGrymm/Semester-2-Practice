#include <iostream> 

using namespace std;

class Records { 
    string name; 
    int age; 
    
    public:
    void read() {
        cout << "Enter the name: ";
        cin >> name; 
        cout << "Enter the age: ";
        cin >> age; 
    }
    
    void show() {
        cout << name << " is the eldest person aged " << age << " years.";
    } 
    
    Records operator >(Records obj) { 
        if(obj.age > age) return obj;
        else return *this; 
    }
};

int main(void) { 
    Records a,b,c; 
    a.read(); 
    b.read(); 
    c.read(); 
    Records result = a > b > c; 
    result.show();
    
    return 0; 
}