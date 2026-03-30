// Contains Duplicate II
// Input: nums = [1,2,3,1], k = 3
// Output: true
//sliding window
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int k = 3;
    int n = arr.size();

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        if (freq.find(arr[i]) != freq.end())
        {
            if (i - freq[arr[i]] <= k)
            {
                cout << "true";
                return 0;
            }
        }
        freq[arr[i]] = i;
    }

    return 0;
}