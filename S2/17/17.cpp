// Input: {4, 2, -3, 1, 6}
// Output: true 
// Explanation:
// There is a subarray with zero sum from index 1 to 3.

#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(vector<int>& arr) {
    unordered_set<int> sumSet; // to store prefix sums
    int sum = 0;

    // Traverse through array and store prefix sums
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        // If prefix sum is 0 or it is already present
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
            return true;
        }

        sumSet.insert(sum);
    }
    return false;
}

int main() {
    vector<int> arr = {-3, 2,-2, 3, 1, 6};

    if (subArrayExists(arr))
        cout << "Found a subarray with 0 sum" << endl;
    else
        cout << "No Such Sub Array Exists!" << endl;

    return 0;
}
