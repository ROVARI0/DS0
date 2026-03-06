// alternate negative and positive
#include <bits/stdc++.h>
using namespace std;

void rightRotateAnArray(vector<int> &arr, int start, int end)
{
    int last = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[start] = last;
}
int main()
{
    vector<int> arr = {1, 2, -3, -4, 5, -6, 7};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        // Case 1: Even index should hold a negative number
        // If we find a non-negative (positive or zero) at even index → mismatch
        if (i % 2 == 0 && arr[i] >= 0)
        {
            // Search forward for the next negative number
            int j = i + 1;
            while (j < n && arr[j] >= 0)
            {
                j++;
            }
            // If found, rotate the subarray [i..j] to bring that negative to position i
            if (j < n)
            {
                rightRotateAnArray(arr, i, j);
            }
        }
        // Case 2: Odd index should hold a positive number
        // If we find a non-positive (negative or zero) at odd index → mismatch
        else if (i % 2 == 1 && arr[i] <= 0)
        {
            // Search forward for the next positive number
            int j = i + 1;
            while (j < n && arr[j] <= 0)
            {
                j++;
            }
            // If found, rotate the subarray [i..j] to bring that positive to position i
            if (j < n)
            {
                rightRotateAnArray(arr, i, j);
            }
        }
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
