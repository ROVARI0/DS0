//leader in array

// Example 2:
// Input:
//  arr = [10, 22, 12, 3, 0, 6]  
// Output:
//  22 12 6  
// Explanation:
//  6 is a leader because there are no elements after it.  
// 12 is greater than all the elements to its right (3, 0, 6), and 22 
// is greater than 12, 3, 0, 6, making them leaders as well.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();

    vector<int> leaders;
    int maxFromRight = arr[n-1]; // rightmost element
    leaders.push_back(maxFromRight);

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end()); // to maintain original order
    cout << "Leaders: ";
    for (int x : leaders) cout << x << " ";
    cout << endl;

    return 0;
}
