// Find the maximum element in an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 4, 6, 8, 9};
    int length = arr.size(); //5
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}