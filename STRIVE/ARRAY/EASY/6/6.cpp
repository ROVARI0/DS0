// Rotate an array by k places

#include <bits/stdc++.h>
using namespace std;

void rotate(int start, int end, vector<int> &arr)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int> &nums, int k)
{
    int n = nums.size();
    rotate(0, k - 1, nums);
    rotate(k, n - 1, nums);
    rotate(0, n - 1, nums);
    return nums;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    vector<int> result = rotateArray(nums, k);

    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}