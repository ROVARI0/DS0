// Longest Consecutive Sequence in an Array
// Input:
//  nums = [100, 4, 200, 1, 3, 2]
// Output:
//  4
// Explanation:
//  The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4.
//   This sequence can be formed regardless of the initial order of the elements in the array.

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;

    unordered_set<int> st(a.begin(), a.end());
    int longest = 1;

    for (auto it : st)
    {
        // check if 'it' is the start of a sequence
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;

            // count consecutive numbers
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 4, 200, 1, 3, 2};
    int ans = longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
//program to print that sequence
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, vector<int>> longestConsecutive(vector<int>& a) {
//     int n = a.size();
//     if (n == 0) return {0, {}};

//     unordered_set<int> st(a.begin(), a.end());
//     int longest = 0;
//     vector<int> bestSeq;

//     for (auto it : st) {
//         // check if 'it' is the start of a sequence
//         if (st.find(it - 1) == st.end()) {
//             int x = it;
//             vector<int> currentSeq;
//             currentSeq.push_back(x);

//             // build the sequence
//             while (st.find(x + 1) != st.end()) {
//                 x = x + 1;
//                 currentSeq.push_back(x);
//             }

//             if ((int)currentSeq.size() > longest) {
//                 longest = currentSeq.size();
//                 bestSeq = currentSeq;
//             }
//         }
//     }
//     return {longest, bestSeq};
// }

// int main() {
//     vector<int> a = {100, 4, 200, 1, 3, 2};
//     auto ans = longestConsecutive(a);

//     cout << "The longest consecutive sequence length is " << ans.first << "\n";
//     cout << "The sequence is: ";
//     for (int x : ans.second) cout << x << " ";
//     cout << "\n";

//     return 0;
// }
