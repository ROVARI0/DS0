// Move all Zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int n = nums.size();
    int pnt;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            pnt = i;
            break;
        }
    }
    // if element !=0 then swap pnt and that element and increment pnt
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[pnt]);
            pnt++;
        }
    }
    for (int n : nums)
    {
        cout << n << " ";
    }
    return 0;
}
