// Program to reverse array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 5, 6, 7, 8};
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] =temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}