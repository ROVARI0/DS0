// Find the GCD of two numbers.

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }
    return a;
}

int main() {
    int num1=48, num2=12;
    

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}

