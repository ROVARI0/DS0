// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// rotate array by one

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int length = arr.size();
    int first = arr[length - 1];
    for (int i = length - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = first;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ';

    return 0;
}