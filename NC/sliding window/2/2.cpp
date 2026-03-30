#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string &s)
{
    unordered_map<char, int> lastIndex;
    int l = 0;
    int maxLen = 0;

    for (int r = 0; r < s.length(); r++)
    {
        if (lastIndex.find(s[r]) != lastIndex.end())
        {
            l = s[r] + 1;
        }
        lastIndex[s[r]] = r;
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main()
{
    string s = "abcabcbb";
    int res = longestSubstring(s);
    cout << res;
    return 0;
}