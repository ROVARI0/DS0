// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array.

#include <iostream>
#include <vector>

using namespace std;

int largestNo(vector<int> &arr, int len)
{
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int> array = {5,2, 3, 4};
    int len = sizeof(array) / sizeof(array[0]);

    int result = largestNo(array, len);
    cout << result << endl;
    return 0;
}