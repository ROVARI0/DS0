// Longest Consecutive Sequence

// Input: nums = [0,3,2,5,4,6,1,1]
// Output: 7

// //Better approach
// #include <bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     int lastSmaller = INT_MIN;
//     int cnt = 0;
//     int longest = 1;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i]-1 == lastSmaller)
//         {
//             cnt += 1;
//             lastSmaller = nums[i];
//         }
//         else if (nums[i] != lastSmaller)
//         {
//             cnt = 1;
//             lastSmaller = nums[i];
//         }
//         longest = max(cnt, longest);
//     }
//     return longest;
// }
// int main()
// {
//     vector<int> nums = {100, 4, 200, 1, 3, 2};
//     cout << "Longest Successive Sequence Length: "
//          << longestSuccessiveElements(nums) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int longestFunction(vector<int> nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int s : nums)
    {
        st.insert(s);
    }
    for (auto it : st)
    {
        // “The previous element does not exist in the set.”
        // If the previous element exists, the condition is false, and the code will not enter the if block. ||
        // If the previous element does not exist, the condition is true, and the code will
        //  enter the if block — treating it as the start of a new consecutive sequence.
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt += 1;
                
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int res = longestFunction(nums);
    cout << res;
    return 0;
}
