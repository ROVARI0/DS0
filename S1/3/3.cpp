// Find Second Smallest Element in an array

#include <iostream>
#include <vector>

using namespace std;
int secondSmallest(vector<int> &arr, int len)
{
    int firstSmall = 100;
    int secondSmall = 100;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < firstSmall)
        {
            secondSmall = firstSmall;
            firstSmall = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != firstSmall)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}
int main()
{
    vector<int> array = {
        1,
        3,
        5,
        6,
        7,
    };
    int len = array.size();
    int result = secondSmallest(array, len);
    cout << result << endl;
    return 0;
}
