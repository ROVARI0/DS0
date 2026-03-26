// Find the majority element in an array (if any).

#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(const vector<int>& nums) {
    int candidate = -1, count = 0;

    // Step 1: Find a candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2)
        return candidate;
    else
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
