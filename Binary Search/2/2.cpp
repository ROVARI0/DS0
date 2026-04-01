// Binary Search
// Input: nums = [-1,0,2,4,6,8], target = 4
// Output: 3

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

    return 0;
}