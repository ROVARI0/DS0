// Remove Element

// Input: nums = [1,1,2,3,4], val = 1
// Output: [2,3,4]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 2, 5};
    int n = arr.size();
    int val = 2;
    for (int i = 0; i < n;)
    {
        if (arr[i] == val)
        {
            arr.erase(arr.begin() + i);
        }
        else
        {
            i++;
        }
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}

// using pointer
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int val = 1;

//     int j = 0; // pointer for new array position
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != val) {
//             arr[j] = arr[i]; // copy only if not equal to val
//             j++;
//         }
//     }

//     // Now j is the new size of the array
//     cout << "Result: ";
//     for (int i = 0; i < j; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
