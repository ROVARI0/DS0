// You are given a sorted array of distinct integers and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.

// Input: nums = [-1,0,2,4,6,8], target = 5
// Output: 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, 0, 2, 4, 6, 8};
    int target = 5;
    int low = 0, high = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << low;
    return 0;
}