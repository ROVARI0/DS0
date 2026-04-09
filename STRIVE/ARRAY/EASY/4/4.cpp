// remove duplicate

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1; // length of unique array
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        if (i < newLength)
            cout << arr[i] << " ";
        else
            cout << "_ ";
    }
    return 0;
}
