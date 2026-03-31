// Minimum Size Subarray Sum
// Your task is to find the minimal length of a contiguous subarray of which the sum is greater
// than or equal to target.
// If no such subarray exists, return 0.
// Input: target = 10, nums = [2,1,5,1,5,3]
// Output: 3
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int left = 0, sum = 0;
    int minLen = INT_MAX; // Initialize minimum length as "infinity" (no solution yet)

    // Move the right pointer across the array
    for (int right = 0; right < n; right++)
    {
        sum += nums[right]; // Add current element to the running sum (expand window)

        // While current window sum is large enough, try to shrink it
        while (sum >= target)
        {
            // Update minimum length if current window is smaller
            minLen = min(minLen, right - left + 1);

            // Remove the leftmost element from the window
            sum -= nums[left];

            // Move left pointer forward (shrink window)
            left++;
        }
    }

    // If minLen was never updated, return 0 (no valid subarray found)
    // Otherwise return the smallest length found
    return (minLen == INT_MAX) ? 0 : minLen;
}

int main()
{
    int target = 10;                       // Target sum we want to reach
    vector<int> nums = {2, 1, 5, 1, 5, 3}; // Input array
    cout << minSubArrayLen(target, nums);  // Call function and print result
    return 0;                              // End program
}
