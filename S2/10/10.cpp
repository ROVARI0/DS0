
#include <iostream>
#include <vector>

using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> merge;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            merge.push_back(arr1[i++]);
        }
        else
        {
            merge.push_back(arr2[j++]);
        }
    }
    while (i < n)
    {
        merge.push_back(arr1[i++]);
    }
    while (j < m)
    {
        merge.push_back(arr2[j++]);
    }
    for (int k = 0; k < n; k++)
    {
        arr1[k] = merge[k];
    }
    for (int k = 0; k < m; ++k)
    {
        arr2[k] = merge[n + k];
    }
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    mergeArrays(arr1, arr2);
    for (int n : arr1)
    {
        cout << n << " ";
    }
    cout << endl;
    for (int n : arr2)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}