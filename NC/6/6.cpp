// Group anagrams

// Input: strs = ["act","pots","tops","cat","stop","hat"]
// Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]

#include <bits/stdc++.h>
using namespace std;

string getFrequencyString(const string &str)
{
    vector<int> freq(26, 0);
    //count frequency of each character in string
    for (char c : str)
    {
        freq[c - 'a']++;
    }
    string freqencyString;
    for (int i = 0; i < 26; i++)
    {
        freqencyString.push_back('a' - 1);
        freqencyString += to_string(freq[i]);
    }
    return freqencyString;
}

vector<vector<string>> groupedAnagram(vector<string> &text)
{
    if (text.empty())
        return {};
    unordered_map<string, vector<string>> frequencyStringsMap;
    for (const string &st : text)
    {
        string frequencyString = getFrequencyString(st);
        frequencyStringsMap[frequencyString].push_back(st);
    }
    vector<vector<string>> result;
    for (auto &entry : frequencyStringsMap)
    {
        result.push_back(entry.second);
    }

    return result;
}

int main()
{
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grouped = groupedAnagram(words);

    for (const auto &group : grouped)
    {
        cout << "[ ";
        for (const auto &word : group)
        {
            cout << word << " ";
        }
        cout << "]\n";
    }
    return 0;
}
