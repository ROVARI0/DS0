// Find the intersection of two arrays.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> fun(vector<int> &arr1, vector<int> &arr2)
{
    unordered_set<int> s(arr1.begin(), arr1.end());
    vector<int> result;
    for (int n : arr2)
    {
        if (s.find(n) != s.end())
        {
            result.push_back(n);
            s.erase(n);
        }
    }
    return result;
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 5};
    vector<int> intersection = fun(arr1, arr2);
    for (int num : intersection)
        cout << num << endl;
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> arrayIntersection(vector<int>& arr1, vector<int>& arr2) {
//     sort(arr1.begin(), arr1.end());
//     sort(arr2.begin(), arr2.end());

//     vector<int> result;
//     int i = 0, j = 0;

//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr1[i] == arr2[j]) {
//             result.push_back(arr1[i]);
//             i++; j++;
//         } else if (arr1[i] < arr2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> arr1 = {1, 2, 2, 3, 4};
//     vector<int> arr2 = {2, 2, 3, 5};

//     vector<int> intersection = arrayIntersection(arr1, arr2);

//     cout << "Intersection: ";
//     for (int x : intersection) cout << x << " ";
//     cout << endl;

//     return 0;
// }
