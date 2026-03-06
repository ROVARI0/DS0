// next permutation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A)
{
    int ind = -1;
    int n = A.size();

    // Step 1: Find the first index from the right where A[i] < A[i+1]
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            ind = i;
            break;
        }
    }

    // Step 2: If no such index exists, array is in descending order
    if (ind == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 3: Find the element just larger than A[ind] from the right
    for (int i = n - 1; i > ind; i--)
    {
        if (A[i] > A[ind])
        {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 4: Reverse the suffix starting at ind+1
    reverse(A.begin() + ind + 1, A.end());
    return A;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    cout << "Original array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    vector<int> result = nextGreaterPermutation(arr);

    cout << "Next permutation: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
