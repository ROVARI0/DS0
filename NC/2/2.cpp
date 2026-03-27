// Contains Duplicate
// Input: nums = [1, 2, 3, 3]

// Output: true

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 4, 1, 2};
    unordered_map<int, int> freq;
    for (int n : nums)
    {
        freq[n]++;
    }
    for (auto a : nums)
    {
        if (freq[a] > 1)
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";
    return 0;
}