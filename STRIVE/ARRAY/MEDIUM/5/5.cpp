// Kadane's Algorithm : Maximum Subarray Sum in an Array
// Print subarray with maximum subarray sum (extended version of above problem)

#include <bits/stdc++.h>
using namespace std;

void maxSubArray(vector<int> &arr)
{
    long long maxi = LONG_MIN;
    int sum = 0;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }
    }

    cout << "Maximum Subarray Sum = " << maxi << endl;
    cout << "Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubArray(arr);
    return 0;
}