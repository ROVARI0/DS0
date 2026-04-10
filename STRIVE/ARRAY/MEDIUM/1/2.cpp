// two sum find index
#include <bits/stdc++.h>
using namespace std;

// Function to find indices of two numbers that sum to target
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1}; // if no pair found
}

int main()
{
    // Assume array
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (result[0] != -1)
    {
        cout << "Indices found: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
