// Input: arr1[] = [1, 5, 10, 20, 30], arr2[] = [5, 13, 15, 20], arr3[] = [5, 20]
// Output: 5 20
// Explanation: 5 and 20 are common in all the arrays.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 5, 10, 20, 30};
    vector<int> arr2 = {5, 13, 15, 20};
    vector<int> arr3 = {5, 20};

    int n1 = arr1.size();
    int n2 = arr2.size();
    int n3 = arr3.size();

    int i = 0;
    int j = 0;
    int k = 0;

    vector<int> common;

    while (i < n1 && j < n2 && k < n3)
    {
        int minimu_m = min({arr1[i], arr2[j], arr3[k]});
        if (arr1[i] == minimu_m && arr2[j] == minimu_m && arr3[k] == minimu_m)
        {
            common.push_back(minimu_m);
        }
        if (arr1[i] == minimu_m && arr1[i] == minimu_m)
        {
            i++;
        }
        if (arr2[j] == minimu_m && arr2[j] == minimu_m)
        {
            j++;
        }
        if (arr3[k] == minimu_m && arr3[k] == minimu_m)
        {
            k++;
        }
    }

    for (int x : common)
    {
        cout << x<<" ";
    }
    return 0;
}