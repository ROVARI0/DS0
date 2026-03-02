// Find the number that appears once

#include <iostream>
#include <vector>

using namespace std;
int find(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 3, 3, 5, 6};
    int size = arr.size();
    int result = find(arr, size);
    cout << result << endl;
    return 0;
}