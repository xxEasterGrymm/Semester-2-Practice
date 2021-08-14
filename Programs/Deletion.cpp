#include <iostream>

using namespace std;
 
int main(void) {
    int sum = 0, n;
    cout <<"Enter the size of the array: ";
    cin >> n;
    int *a = new int[n];
    cout <<"Enter the marks:" << endl;
    for(int i = 0; i < n; i++) cin>>a[i];
    
    for(int i = 0; i < n; i++) sum = sum + a[i];
    cout << "The sum of "<< n << " marks is " << sum;
    delete[] a;
    
    return 0;
}