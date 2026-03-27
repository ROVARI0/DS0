// Longest Common Prefix
// Input: strs = ["bat","bag","bank","band"]

// Output: "ba"

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    // Sort the array
    sort(strs.begin(), strs.end()); // O(n log n)

    // Get the first and last strings
    string first = strs.front();
    string last = strs.back();

    string result = "";
    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] != last[i])
        {
            break; // mismatch found
        }
        result.push_back(first[i]);
    }

    return result;
}

int main()
{
    vector<string> strs = {"bat", "bag", "bank", "band"};
    string result = longestCommonPrefix(strs);
    cout << result << endl; // Output: ba
    return 0;
}
