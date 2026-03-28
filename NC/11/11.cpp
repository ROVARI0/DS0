// Dutch national flag algorithm

// Input: nums = [1,0,1,2]
// Output: [0,1,1,2]

#include <bits/stdc++.h>
using namespace std;

vector<int> dutch(vector<int> arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {0, 2, 1, 0, 2};
    int n = arr.size();
    vector<int> ar2 = dutch(arr);
    for (int x : ar2)
    {
        cout << x << " ";
    }
    return 0;
}
