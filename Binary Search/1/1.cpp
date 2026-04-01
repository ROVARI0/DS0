// Program to find a peak element in an array using binary search.
// A peak element is one that is greater than its neighbors.
// Example: In [1, 3, 5, 6, 3, 2, 1], the peak is 6.
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // If mid element is greater than the next one,
        // then the peak lies on the left side (including mid)
        if (nums[mid] > nums[mid + 1])
        {
            right = mid;
        }
        else
        {
            // Otherwise, the peak lies on the right side
            left = mid + 1;
        }
    }
    // At the end, left == right, pointing to a peak element
    return nums[left];
}

int main()
{
    vector<int> nums = {1, 3, 5, 6, 3, 2, 1};
    cout << "Peak element is: " << findPeakElement(nums) << endl;
    return 0;
}
