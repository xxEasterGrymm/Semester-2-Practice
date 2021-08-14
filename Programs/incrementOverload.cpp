#include <iostream>

using namespace std;

class Overload {
    private:
    int var;

    public:
    Overload() {
        int var = 0;
    }
    
    void operator ++() { 
      ++var; 
    }
    
    Overload operator ++(int) {
      Overload temp;
      temp.var = var++;
      return temp;
    }
    
    void display() {
      cout << "\nvar = " << var << endl;
    }
};

int main() {
    Overload before;
    cout << "Before increment:";
    before.display();
    before++;
    cout << "After pre increment: ";
    before.display();
    cout << "After post increment: ";
    Overload post = before++;
    post.display();
    cout << "Final Value:";
    before.display();
    
    return 0;
}