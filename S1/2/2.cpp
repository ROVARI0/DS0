// Find Second Largest Element in an array

#include <iostream>
#include <vector>

using namespace std;
int secondLargest(vector<int> &arr, int len)
{
    int firstBig = 0;
    int secondBig = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > firstBig)
        {
            secondBig = firstBig;
            firstBig = arr[i];
        }
        else if (arr[i] > secondBig && arr[i] != firstBig)
        {
            secondBig = arr[i];
        }
    }
    return secondBig;
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
    int len =array.size();
    int result = secondLargest(array, len);
    cout << result << endl;
    return 0;
}
