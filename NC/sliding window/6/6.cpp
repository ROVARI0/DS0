// Find K Closest Elements
// Input: arr = [2,4,5,8], k = 2, x = 6
// Output: [4,5]

// You are given a sorted integer array arr, two integers k and x, return the k closest
// integers to x in the array. The result should also be sorted in ascending order.

#include <iostream> // For input/output operations
#include <vector>   // For using the vector container
#include <cmath>    // For absolute value calculations
using namespace std;

// If left boundary is farther → move window right.

// If left boundary is closer or equal → keep window left.

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int n = arr.size();          // Get the number of elements in the array
    int left = 0, right = n - k; // Possible starting indices for a window of size k

    // Binary search to find the best starting index for the window
    while (left < right)
    {
        int mid = (left + right) / 2; // Midpoint between left and right

        // Compare closeness of x to arr[mid] (left boundary) and arr[mid + k] (right boundary)
        if (x - arr[mid] > arr[mid + k] - x)
        {
            // If x is closer to the right boundary than the left boundary,
            // shift the window to the right by moving 'left' forward.
            left = mid + 1;
        }
        else
        {
            // Otherwise, x is closer to the left boundary (or equally close),
            // so keep the window on the left side by moving 'right' inward.
            right = mid;
        }
    }

    // At the end, 'left' is the starting index of the best window
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5}; // Input sorted array
    int k = 4;                         // Number of closest elements to find
    int x = 3;                         // Target value

    // Call the function to find k closest elements
    vector<int> result = findClosestElements(arr, k, x);

    // Print the result
    cout << "[ ";
    for (int num : result)
        cout << num << " "; // Print each element in the result
    cout << "]" << endl;

    return 0; // End program
}
