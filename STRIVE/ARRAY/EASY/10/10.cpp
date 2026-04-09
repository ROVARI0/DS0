// find missing number

#include <bits/stdc++.h>
using namespace std;

int missingNum(int arr[], int n)
{
    // Expected sum of numbers from 1 to n
    int expSum;
    for (int i = 0; i <= n; i++)
    {
        expSum += i;
    }

    // Actual sum of array elements
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    // Missing number is difference
    return expSum - sum;
}

int main()
{
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // total numbers should be n

    cout << "Missing number is: " << missingNum(arr, n);
    return 0;
}
