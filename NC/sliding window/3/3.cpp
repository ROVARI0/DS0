// You are given a string s consisting of only uppercase english characters and an integer k. You can choose up to
//  k characters of the string and replace them with any other uppercase English character.

// Input: s = "XYYX", k = 2
// Output: 4

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        unordered_map<char, int> freq;
        int left = 0, right = 0;
        int maxCount = 0;
        int maxLength = 0;

        while (right < s.size())
        {
            // Increment frequency of current character
            freq[s[right]]++;

            // Update maxCount
            maxCount = max(maxCount, freq[s[right]]);

            // Shrink window if replacements exceed k
            while ((right - left + 1) - maxCount > k)
            {
                freq[s[left]]--;
                left++;
            }

            // Update maxLength
            maxLength = max(maxLength, right - left + 1);

            right++;
        }

        return maxLength;
    }
};

int main()
{
    Solution sol;
    string s = "AABABBA";
    int k = 1;
    cout << sol.characterReplacement(s, k) << endl; // Output: 4
    return 0;
}