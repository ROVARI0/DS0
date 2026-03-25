// Merge two sorted arrays into one.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    vector<int> merged;

    int i = 0, j = 0;

    // Merge until one array is exhausted
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            merged.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Copy remaining elements
    while (i < arr1.size())
    {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        merged.push_back(arr2[j]);
        j++;
    }

    cout << "Merged sorted array: ";
    for (int num : merged)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
