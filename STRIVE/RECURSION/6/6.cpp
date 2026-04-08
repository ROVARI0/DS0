// reverse array
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}

#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
int main()
{
    int arr[] = {2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr, start, end);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}