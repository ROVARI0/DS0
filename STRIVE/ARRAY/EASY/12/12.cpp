// Find the number that appears once, and the other numbers twice

#include <bits/stdc++.h>
using namespace std;

int findSingleNumber(vector<int> &arr)
{
    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int num : arr)
    {
        freq[num]++;
    }

    // Find the element with frequency 1
    for (auto it : freq)
    {
        if (it.second == 1)
            return it.first;
    }

    return -1; // if no single element found
}

int main()
{
    vector<int> arr = {2, 2, 1};
    cout << "Single number is: " << findSingleNumber(arr) << endl;
    return 0;
}
