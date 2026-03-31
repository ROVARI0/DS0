// Permutation in String
// Return true if s2 contains a permutation of s1,
// or false otherwise. That means if a permutation of s1 exists as a substring of s2, then return true.

// Input: s1 = "abc", s2 = "lecabee"
// Output: true
#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(const string &s1, const string &s2)
{
    // Get lengths of both strings
    int n1 = s1.size(), n2 = s2.size();

    // If s1 is longer than s2, it's impossible for s2 to contain a permutation of s1
    if (n1 > n2)
        return false;

    // Build frequency map for characters in s1
    unordered_map<char, int> freq1;
    for (char c : s1)
        freq1[c]++;

    // Build frequency map for the first window of size n1 in s2
    unordered_map<char, int> freq2;
    for (int i = 0; i < n1; i++)
        freq2[s2[i]]++;

    // Compare the first window with s1's frequency map
    if (freq1 == freq2)
        return true;

    // Slide the window across s2, one character at a time
    for (int i = n1; i < n2; i++)
    {
        // Add the new character entering the window (at index i)
        freq2[s2[i]]++;

        // Remove the old character leaving the window (at index i - n1)
        freq2[s2[i - n1]]--;

        // If the frequency of that old character becomes zero, erase it from the map
        // This keeps the map clean and ensures comparisons are accurate
        if (freq2[s2[i - n1]] == 0)
        {
            freq2.erase(s2[i - n1]);
        }

        // Compare the updated window with s1's frequency map
        // If they match, it means this window is a permutation of s1
        if (freq1 == freq2)
            return true;
    }

    // If no window matched, return false
    return false;
}

int main()
{
    string s1 = "abc";
    string s2 = "lecabee";

    // Test the function and print result
    cout << (checkInclusion(s1, s2) ? "true" : "false") << endl;
    return 0;
}
