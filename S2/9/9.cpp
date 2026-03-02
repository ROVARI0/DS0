// Maximum Subarray Sum - Kadane's Algorithm
// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {-1, 2, -3, 4, 5};
    int size = arr.size();
    int sum = 0, max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max;
    return 0;
}