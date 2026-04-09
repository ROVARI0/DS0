// Longest Subarray with given Sum K(Positives)
// nums = [10, 5, 2, 7, 1, 9], k = 15
// Output:
//  4
// Explanation:
// The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4.
// This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15.
// Therefore, the length of this sub-array is 4.

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &nums, int k)
{
    int n = nums.size();
    int left = 0, right = 0, sum = 0, maxLen = 0;

    while (right < n)
    {
        sum += nums[right];
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = longestSubarrayWithSumK(nums, k);
    cout << "The length of longest subarray having sum k is: " << ans << endl;
    return 0;
}