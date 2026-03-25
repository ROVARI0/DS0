// Check if a number is a perfect square.

#include <iostream>
#include <cmath> // for sqrt
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false; // negative numbers can't be perfect squares
    int root = sqrt(num);      // find integer square root
    return root * root == num; // check if square matches
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
        cout << num << " is a perfect square." << endl;
    else
        cout << num << " is NOT a perfect square." << endl;

    return 0;
}

