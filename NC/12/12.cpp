// Top K Frequent Elements

// Input: nums = [1,2,2,3,3,3], k = 2
// Output: [2,3]
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 2, 3, 3, 3};
//     int n = arr.size();

//     unordered_map<int,int> freq;
//     for(int a : arr){
//         freq[a]++;
//     }

//     // Track max and second max
//     int maxFreq = INT_MIN, secondMaxFreq = INT_MIN;
//     int maxElem = -1, secondMaxElem = -1;

//     for(auto p : freq){
//         int elem = p.first;
//         int f = p.second;

//         if(f > maxFreq){
//             secondMaxFreq = maxFreq;
//             secondMaxElem = maxElem;
//             maxFreq = f;
//             maxElem = elem;
//         }
//         else if(f > secondMaxFreq){
//             secondMaxFreq = f;
//             secondMaxElem = elem;
//         }
//     }

//     cout << "Most frequent element: " << maxElem << " (freq=" << maxFreq << ")\n";
//     cout << "Second most frequent element: " << secondMaxElem << " (freq=" << secondMaxFreq << ")\n";

//     return 0;
// }


//using bucket sort

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    // Step 1: Build frequency map
    unordered_map<int, int> frequencyMap;
    for (int n : nums) {
        frequencyMap[n]++;
    }

    // Step 2: Create buckets (index = frequency)
    vector<vector<int>> bucket(nums.size() + 1);
    for (auto& entry : frequencyMap) {
        int num = entry.first;
        int freq = entry.second;
        bucket[freq].push_back(num);
    }

    // Step 3: Collect top k frequent elements
    vector<int> res;
    for (int pos = bucket.size() - 1; pos >= 0 && res.size() < k; pos--) {
        if (!bucket[pos].empty()) {
            for (int num : bucket[pos]) {
                res.push_back(num);
                if (res.size() == k) break;
            }
        }
    }

    return res;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
