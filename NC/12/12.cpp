// Top K Frequent Elements

// Input: nums = [1,2,2,3,3,3], k = 2
// Output: [2,3]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    int n = arr.size();

    unordered_map<int,int> freq;
    for(int a : arr){
        freq[a]++;
    }

    // Track max and second max
    int maxFreq = INT_MIN, secondMaxFreq = INT_MIN;
    int maxElem = -1, secondMaxElem = -1;

    for(auto p : freq){
        int elem = p.first;
        int f = p.second;

        if(f > maxFreq){
            secondMaxFreq = maxFreq;
            secondMaxElem = maxElem;
            maxFreq = f;
            maxElem = elem;
        }
        else if(f > secondMaxFreq){
            secondMaxFreq = f;
            secondMaxElem = elem;
        }
    }

    cout << "Most frequent element: " << maxElem << " (freq=" << maxFreq << ")\n";
    cout << "Second most frequent element: " << secondMaxElem << " (freq=" << secondMaxFreq << ")\n";

    return 0;
}
