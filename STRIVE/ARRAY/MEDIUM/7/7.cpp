// Rearrange Array Elements by Sign
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, 2, -3, 6};
    int n = arr.size();
    vector<int> ans(n, 0);
    int positiveIndex = 0, negativeIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negativeIndex] = arr[i];
            negativeIndex += 2;
        }
        else
        {
            ans[positiveIndex] = arr[i];
            positiveIndex += 2;
        }
    }
    for (int n : ans)
    {
        cout << n << " ";
    }
    return 0;
}