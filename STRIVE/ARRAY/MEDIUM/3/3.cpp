// Find the Majority Element that occurs more than N/2 times

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int size = arr.size();
    unordered_map<int, int> mp;
    for (int num : arr)
    {
        mp[num]++;
    }
    for (auto &pair : mp)
    {
        if (pair.second > (size / 2))
        {
            cout << pair.first;
            break;
        }
    }
    return 0;
}
// optimal down one
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the majority element in an array
// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//     int cnt = 0;
//     int el = -1;

//     // Step 1: Find candidate
//     for (int i = 0; i < n; i++) {
//         if (cnt == 0) {
//             el = nums[i];
//             cnt = 1;
//         } else if (nums[i] == el) {
//             cnt++;
//         } else {
//             cnt--;
//         }
//     }

//     // Step 2: Verify candidate
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] == el) {
//             cnt1++;
//         }
//     }

//     if (cnt1 > n / 2) return el;
//     return -1;
// }

// int main() {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

//     int ans = majorityElement(arr);

//     cout << "The majority element is: " << ans << endl;

//     return 0;
// }
