/*
    Problem: Maximum Sum Subarray of Size K
    ---------------------------------------
    Given an array of integers and a number k,
    find the maximum sum of any contiguous subarray of length k.

    Example:
    Input: arr = {-1, 2, 3, 4, 5, -1}, k = 4
    Output: 14
    Explanation:
        Subarrays of length 4 are:
        [-1, 2, 3, 4] → sum = 8
        [2, 3, 4, 5]  → sum = 14
        [3, 4, 5, -1] → sum = 11
        Maximum = 14
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input array and window size k
    vector<int> arr = {-1, 2, 3, 4, 5, -1};
    int k = 4;
    int n = arr.size();

    // Step 1: Compute sum of the first window (first k elements)
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxSum = sum;

    // Step 2: Slide the window across the array
    for (int i = k; i < n; i++)
    {
        // Remove the element leaving the window (arr[i - k])
        // Add the new element entering the window (arr[i])
        sum = sum - arr[i - k] + arr[i];

        // Update maximum sum if current window sum is greater
        maxSum = max(maxSum, sum);
    }

    // Output the result
    cout << "Maximum sum of subarray of length " << k << " = " << maxSum << endl;

    return 0;
}
