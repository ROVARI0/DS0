// Products of Array Except Self

// Input: nums = [1,2,4,6]
// Output: [48,24,12,8]

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    // Arrays to store cumulative products
    vector<int> left(n, 1);
    vector<int> right(n, 1);
    vector<int> ans(n);

    // Fill left array
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }

    // Fill right array
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }

    // Final answer
    for (int i = 0; i < n; i++)
    {
        ans[i] = left[i] * right[i];
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Result: ";
    for (int x : result)
        cout << x << " ";
    return 0;
}
