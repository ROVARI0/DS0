// Two Sum
// Input:
// nums = [3,4,5,6], target = 7

// Output: [0,1]

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int diff = target - arr[i];
        if (freq.find(diff) != freq.end())
        {
            return {freq[diff], i};
        }
        freq.insert({arr[i], i});
    }
    return {};
}
int main()
{
    vector<int> arr = {2, 3, 4, 6};
    int n = arr.size();
    int target = 7;
    vector<int> result = twoSum(arr, n, target);
    if (!result.empty())
    {
        cout << "[" << result[0] << "," << result[1] << "]";
    }
    else
    {
        cout << "No solution";
    }
    return 0;
}