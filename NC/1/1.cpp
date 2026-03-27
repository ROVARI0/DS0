// Concatenation of Array

// Input: nums = [1,4,1,2]
// Output: [1,4,1,2,1,4,1,2]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 4, 1, 2};
    vector<int> result(nums.size() * 2);
    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = nums[i];
        result[i + nums.size()] = nums[i];
    }
    for (int n : result)
    {
        cout << n << " ";
    }
    return 0;
}
