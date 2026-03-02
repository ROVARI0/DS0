// Input: arr = [7, 10, 4, 3, 20, 15], k = 3
// Output: 7
// Explanation: The sorted array is [3, 4, 7, 10, 15, 20], so the 3rd smallest element is 7.

#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    // Sort the array
    sort(arr.begin(), arr.end());

    // Print the k-th smallest element
    cout << "The " << k << "rd smallest element is: " << arr[k-1] << endl;

    return 0;
}
