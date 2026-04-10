// kadanes algorithm
// maximum subarray sum

#include <bits/stdc++.h>
using namespace std;

// Function to find maximum sum of subarrays
int maxSubArray(vector<int> &nums)
{
    long long maxi = LLONG_MIN; // maximum sum
    long long sum = 0;          // current sum

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i]; // add current element

        if (sum > maxi)
        { // update maximum
            maxi = sum;
        }

        if (sum < 0)
        { // reset if sum goes negative
            sum = 0;
        }
    }

    return maxi;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = maxSubArray(arr);

    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}
