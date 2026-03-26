// Find the majority element in an array (if any).

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(const vector<int>& nums) {
    unordered_map<int, int> freq;
    int n = nums.size();

    // Count frequency of each element
    for (int num : nums) {
        freq[num]++;
    }

    // Check if any element is majority
    for (auto& entry : freq) {
        if (entry.second > n / 2) {
            return entry.first;
        }
    }

    return -1; // No majority element
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};
    int result = findMajorityElement(arr);

    if (result != -1)
        cout << "Majority element: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
