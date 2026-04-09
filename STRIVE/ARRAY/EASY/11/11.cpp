// Count Maximum Consecutive One's in the array
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int n = arr.size();
    int cnt = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(cnt, maxi);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << cnt;
    return 0;
}
