// 2 Sum - Count pairs with given sum.
// Input: arr[] = [1, 5, 7, -1, 5], target = 6
// Output:  3
// Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5). 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countPairs(vector<int>& arr, int target) {
    unordered_map<int, int> freq; // stores frequency of elements
    int cnt = 0;

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];

        // If complement exists, add its frequency to count
        if (freq.find(complement) != freq.end()) {
            cnt += freq[complement];
        }

        // Increment frequency of current element
        freq[arr[i]]++;
    }
    return cnt;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;

    cout << countPairs(arr, target) << endl; // Output: 3
    return 0;
}
