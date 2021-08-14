#include <iostream>

using namespace std;

float Division(float n, float d) {
    if (d == 0) throw runtime_error("Math error: Attempted to divide by Zero\n");
    return (n / d);
}

int main() {
    float numerator, denominator, result;
    cout << "Enter the numerator and the denominator respectively: " << endl;
    cin >> numerator >> denominator;

    try {
       result = Division(numerator, denominator);
       cout << "The quotient is " << result << endl;
    }
    catch (runtime_error& e) {
       cout << "Exception occurred" << endl << e.what();
    }
    
    return 0;
}