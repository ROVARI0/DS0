// largest element in arrray

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n)
{
    int max = arr[0];

    // Iterate through the array to find the maximum element
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        { // If the current element is greater than max, update max
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    // Array 1
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = findLargestElement(arr1, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}