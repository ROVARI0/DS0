// Sort an array of 0's 1's and 2's

#include <bits/stdc++.h>
using namespace std;

// Function to sort array containing 0s, 1s, and 2s
void sortZeroOneTwo(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortZeroOneTwo(nums);

    for (int val : nums)
        cout << val << " ";

    return 0;
}
